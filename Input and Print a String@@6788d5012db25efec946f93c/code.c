// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     printf("%s", welcome());
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     char ch[100];
//     scanf("%s",&ch);
//     printf("You entered: %ch",ch);
// }
#include <stdio.h>

int main() {
    char str[100]; // Buffer to hold the input string

    // Taking a single word (string) as input
    scanf("%s", str);

    // Printing the entered string
    printf("You entered: %s\n", str);

    return 0;
}
