#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int bookID;
    struct Node* left;
    struct Node* right;
} Node;


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

//  insert 
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

// deletion
Node* delete(Node* root, int bookID) {
    if (root == NULL) {
        printf("Book ID %d not found.\n", bookID);
        return root;
    }

    
    if (bookID < root->bookID) {
        root->left = delete(root->left, bookID);
    }
    
    else if (bookID > root->bookID) {
        root->right = delete(root->right, bookID);
    }

    else {
        
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        
        Node* temp = findMin(root->right);

        
        root->bookID = temp->bookID;

        root->right = delete(root->right, temp->bookID);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->bookID);
        inorderTraversal(root->right);
    }
}


int main() {
   
    int initialBooks[] = {560, 340, 800, 320, 450, 600, 700};
    int n = sizeof(initialBooks) / sizeof(initialBooks[0]);

    Node* root = NULL;

  
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
            case 1: 
                printf("Enter the new book ID to insert: ");
                scanf("%d", &bookID);
                root = insert(root, bookID);
                printf("Book ID %d added to the library.\n", bookID);
                break;

            case 2: 
                printf("Enter the book ID to remove: ");
                scanf("%d", &bookID);
                root = delete(root, bookID);
                printf("Book ID %d removed from the library.\n", bookID);
                break;

            case 3: 
                printf("Books in library (sorted): ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
