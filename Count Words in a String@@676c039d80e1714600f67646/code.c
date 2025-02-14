#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  
    int count = 0;
    int inWord = 0;  
    for (int i = 0; i<strlen(str); i++) {
        if (str[i] == ' ') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1; 
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}