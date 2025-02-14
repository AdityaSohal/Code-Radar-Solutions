#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int start=0;
    int end=strlen(str)-1;
    int ispalindrome=0;
    
    while (start<end){
        if (str[start] != str[end]) {
            isPalindrome = 0;  
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}