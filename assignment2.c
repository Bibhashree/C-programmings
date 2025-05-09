//Name: Bibhashree Pradhan
#include <stdio.h>
int main() 
{
    int a, b, c, d;
    printf("Enter values for a:\n");
    scanf("%d",&a);
    printf("Enter values for b:\n");
    scanf("%d",&b);
    printf("Enter values for c:\n");
    scanf("%d",&c);
    printf("Enter values for d: \n");
    scanf("%d",&d);
    printf("Expression: ((a + b) > c) && (c % d == 0)\n");
    if (((a + b) > c) && (c % d == 0))
    {
        printf("The expression is TRUE.\n");
    } 
    else 
    {
        printf("The expression is FALSE.\n");
    }
return 0;
}
