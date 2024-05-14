//Culculat determinante , cofactor & minor of a matrix

#include <stdio.h>

void Cofactor(int A[10][10], int temp[10][10], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = A[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinant(int A[10][10], int n) {
    int D = 0;
    if (n == 1)
        return A[0][0];
    int temp[10][10];
    int sign = 1;
    for (int f = 0; f < n; f++) {
        Cofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

void printMatrix(int A[10][10], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
                printf("[%d] [%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
      printf("matrix =\n");
    for(int i=0;i<n;i++)
    {
       // printf(" \t");
        for(int j=0;j<n;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
      printf("\n");
    }
    printf("The determinant of the matrix is: %d\n", determinant(matrix, n));
    printf("The cofactor matrix is:\n");
    int temp[10][10];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            Cofactor(matrix, temp, i, j, n);
            printf("%d ", determinant(temp, n-1) * ((i+j)%2 ? -1 : 1));
            //testCondition ? expression1 : expression 2;
            //expression1 = true print(-1)
            //expression2 = false print(1)
        }
        printf("\n");
    }
    printf("The minor matrix is:\n");
    for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        Cofactor(matrix, temp, i, j, n);
        printf("%d ", determinant(temp, n-1));
    }
    printf("\n");
}

    return 0;
}

