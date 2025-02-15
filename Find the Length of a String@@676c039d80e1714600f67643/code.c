#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin); 
    printf("%d\n",strlen(str));
    return 0;
}