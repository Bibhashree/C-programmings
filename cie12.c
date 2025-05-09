#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        // Skip non-alphanumeric characters
        if (!isalnum(str[start])) {
            start++;
            continue;
        }
        if (!isalnum(str[end])) {
            end--;
            continue;
        }
        // Convert both characters to lowercase for comparison
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
