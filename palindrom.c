#include <stdio.h>

int main() {
    int n, reversed = 0, original, digit;
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
