#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    int chr=(int)ch;
    if(chr>=65&&chr<=90)
    printf("Uppercase")
    else if(chr>=97&&chr<=122)
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}