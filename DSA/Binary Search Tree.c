#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
typedef struct Node {
    int bookID;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int bookID) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->bookID = bookID;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new book ID into the binary search tree
Node* insert(Node* root, int bookID) {
    if (root == NULL) {
        return createNode(bookID);
    }
    if (bookID < root->bookID) {
        root->left = insert(root->left, bookID);  // Insert in the left subtree
    } else if (bookID > root->bookID) {
        root->right = insert(root->right, bookID);  // Insert in the right subtree
    }
    return root;
}

// Function to find the minimum node (used for deletion)
Node* findMin(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to remove a book ID (deletion)
Node* delete(Node* root, int bookID) {
    if (root == NULL) {
        printf("Book ID %d not found.\n", bookID);
        return root;
    }

    // If the bookID to be deleted is smaller, then it lies in the left subtree
    if (bookID < root->bookID) {
        root->left = delete(root->left, bookID);
    }
    // If the bookID to be deleted is larger, then it lies in the right subtree
    else if (bookID > root->bookID) {
        root->right = delete(root->right, bookID);
    }
    // If bookID is the same as root's bookID, this is the node to be deleted
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->bookID = temp->bookID;

        // Delete the inorder successor
        root->right = delete(root->right, temp->bookID);
    }
    return root;
}

// Function to print the inorder traversal of the binary search tree
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->bookID);
        inorderTraversal(root->right);
    }
}

// Main function to test the binary search tree implementation
int main() {
    // Initialize the tree with some book IDs
    int initialBooks[] = {560, 340, 800, 320, 450, 600, 700};
    int n = sizeof(initialBooks) / sizeof(initialBooks[0]);

    Node* root = NULL;

    // Insert the initial books into the tree
    for (int i = 0; i < n; i++) {
        root = insert(root, initialBooks[i]);
    }

    int choice, bookID;

    while (1) {
        printf("\nLibrary Book Sorting System:\n");
        printf("1. Insert New Book ID\n");
        printf("2. Remove Book ID\n");
        printf("3. Display All Books (Inorder Traversal)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert new book ID
                printf("Enter the new book ID to insert: ");
                scanf("%d", &bookID);
                root = insert(root, bookID);
                printf("Book ID %d added to the library.\n", bookID);
                break;

            case 2: // Remove a book ID
                printf("Enter the book ID to remove: ");
                scanf("%d", &bookID);
                root = delete(root, bookID);
                printf("Book ID %d removed from the library.\n", bookID);
                break;

            case 3: // Display all book IDs in sorted order
                printf("Books in library (sorted): ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 4: // Exit
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
