#include <stdio.h>
struct Rectangle{
    float length;
    float bredth;
};
void calculateareaandperimenter(struct Rectangle react[],int n){
    for(int i=0;i<n;i++){
        float area = react[i].length*react[i].bredth;
        float perimeter = 2*(react[i].length+react[i].bredth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i+1,area, perimeter);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    struct Rectangle react[n];
    for(int i=0;i<n;i++){
        scnaf("%f %f",&react[i].length, &react[i].bredth);
    }
    calculateareaandperimenter(react,n);
}