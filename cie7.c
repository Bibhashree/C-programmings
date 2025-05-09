#include <stdio.h>
int main() {
    int m, p, n;
    printf("Enter rows of first matrix (m): ");
    scanf("%d", &m);
    printf("Enter columns of first matrix / rows of second matrix (p): ");
    scanf("%d", &p);
    printf("Enter columns of second matrix (n): ");
    scanf("%d", &n);

    int A[m][p], B[p][n], C[m][n];

    printf("\nEnter elements of first matrix (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (%d x %d):\n", p, n);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
         C[i][j] = 0;
         }
     }

    for (int i = 0; i < m; i++) {     
        for (int j = 0; j < n; j++) {  
            for (int k = 0; k < p; k++) {   
                C[i][j] += A[i][k] * B[k][j];
                printf("%d\t", C[i][j]); 
            }
            printf("\n");
            }
        }
    return 0;
}
