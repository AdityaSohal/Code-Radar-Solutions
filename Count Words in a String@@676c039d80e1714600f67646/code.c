#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    fgets(str,sizeof(str), stdin);
    int count=0;
    int inwords=0;
    for(int i=0;i<strlen(str);i++)if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1;  
            count++;
    }
    
    printf("%d",count);
    return 0;
}