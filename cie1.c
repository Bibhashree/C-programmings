//Bibhashree Pradhan
#include <stdio.h>
int main()
{
    int num, i;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    float numbers[num];
    float sum = 0;
    for (i = 0; i < num; i++) {
        printf("element %d:",i+1);
        scanf("%f",&numbers[i]);
        sum += numbers[i];
    }
    average = sum / num;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
return 0;
}