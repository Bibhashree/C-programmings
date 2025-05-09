//Bibhashree Pradhan
#include <stdio.h>
int main()
 {
    float P, r, n, t, A;
    int exponent;
    float base;

    printf("Enter P: ");
    scanf("%f", &P);

    printf("Enter r:");
    scanf("%f", &r);

    printf("Enter n:");
    scanf("%f", &n);

    printf("Enter t:");
    scanf("%f", &t);

    base = 1 + r / n;
    exponent = n * t;

    float total = 1;
    for (int i = 0; i < exponent; i++) 
    {
        total= total * base;
    }
    A = P * total;
     printf("The compound interest is:%.2f\n",A);
    return 0;
}
