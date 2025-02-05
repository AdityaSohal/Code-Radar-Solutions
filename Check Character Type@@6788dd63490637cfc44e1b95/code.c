#include <stdio.h>

int main() {
    char ch;
    
    // Read a single character
    scanf("%c", &ch);

    // Check if the character is a vowel (lowercase or uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Check if the character is a consonant (alphabet character, but not a vowel)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
