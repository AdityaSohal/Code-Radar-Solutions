#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'A'|| ch == 'a')
    printf("Excellent");
    else if(ch == 'B'|| ch == 'b')
    printf("Good");
    else if(ch == 'C'|| ch == 'c')
    printf("Average");
    else if(ch == 'D'|| ch == 'd')
    printf("Below Average");
    else if(ch == 'F'|| ch == 'f')
    printf("Fail");
    else
    printf("Invalid grade");
    return 0;
}