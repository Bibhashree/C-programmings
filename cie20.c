#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;    
        b = a % b;    // Update b to the remainder of a divided by b
        a = temp;        
    }
    return a;  // When b becomes 0, a contains the GCD
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
