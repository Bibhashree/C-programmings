//bibhashree Pradhan
#include <stdio.h>
int main()
{
    int num, i;
    int largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int numbers[num];

    for (i = 0; i <=num; i++) {
        printf("Element %d:",i);
        scanf("%d", &numbers[i]);
    }
    largest = smallest = numbers[0];
    for (i = 1; i < num; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
return 0;
}