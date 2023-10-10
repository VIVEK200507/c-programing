#include <stdio.h>

// Palindrome number
int main() {
    int num, originalNum, reverseNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reverseNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}




