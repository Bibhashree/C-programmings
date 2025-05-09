#include <stdio.h>
int reverseString(char str[]) {
    int i, j;
    for (j = 0; str[j] != '\0'; j++);
    j--;
    
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverseString(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}
