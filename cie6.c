//BIbhashree Pradhan 
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int A[m][n], B[m][n], sum[m][n];
    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        } }
    printf("Enter elements of second matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        } }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n"); 
        } 
return 0;
}