#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int start=0;
    int end=strlen(str)-1;
    int ispalindrome=1;
    
    while (start<end){
        if (str[start] != str[end]) {
            ispalindrome = 0;  
            break;
        }
        start++;
        end--;
    }
    if(ispalindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}