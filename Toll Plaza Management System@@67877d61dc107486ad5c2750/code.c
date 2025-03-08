#include <stdio.h>
#include <string.h>  

struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int n;
    scanf("%d", &n);  

    struct Vehicle vehicles[n];

    float carToll = 0, truckToll = 0, bikeToll = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);
        for (int j = 0; vehicles[i].type[j]; j++) {
            if (vehicles[i].type[j] >= 'A' && vehicles[i].type[j] <= 'Z') {
                vehicles[i].type[j] += 32; 
            }
        }
        if (strcmp(vehicles[i].type, "car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);

    return 0;
}
