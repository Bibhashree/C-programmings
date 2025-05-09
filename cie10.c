#include <stdio.h>
int main() 
{
    int num;
    printf("Enter the number of names: ");
    scanf("%d", &num);
    char names[num][100];

    for (int i = 0; i < num; i++) {
        printf("Enter %d name:\n", i+1);
        scanf("%s", names[i]); 
    }
    printf("\nThe entered names are:\n");
    for (int i = 0; i < num; i++) {
        printf("%s\n", names[i]);
    }
return 0;
}