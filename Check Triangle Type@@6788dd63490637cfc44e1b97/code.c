#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    printf("Equilateral");
    else if (a!=b&&b!=c&&c!=a)
    printf("Scalen");
    else
    printf("Isolateral");
    return 0;
}