#include <stdio.h>
struct Weekdays{
    char day[100];
    float temp;
};
int main(){
    float sum=0.0;
    float avg;
    struct Weekdays days[];
    for(int i =0;i<7;i++){
        scanf("%s %f", days[i].day, &days[i].temp);
    }
    for(int i =0;i<7;i++){
        sum += days[i].temp;
    }
    avg= sum/7;
    printf("Average Temperature: %.2f",avg);

}