#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    int A[m][n]; 
    printf("\nEnter elements of the matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);  }
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j]; 
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);}
    printf("\nSum of each column:\n");
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];  
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }
    return 0;
}
