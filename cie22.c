#include <stdio.h>
void fibonacci(int n) {
    static int a = 0, b = 1;
    if (n > 0) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
        fibonacci(n - 1);
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n);

    return 0;
}
