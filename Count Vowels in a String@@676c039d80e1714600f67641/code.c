#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count =0;
    for(int i=0;i<strlen(str);i++){
        char ch=str[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        count++;
    }
    }
    printf("%d",count);
    return 0;
}