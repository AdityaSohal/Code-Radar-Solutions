#include <stdio.h>
#include <string.h>  // For strcmp()

struct Subscription {
    char user[100];
    char type[20];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n); 
     struct Subscription subs[n];
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].user, subs[i].type, &subs[i].cost);
        if (strcmp(subs[i].type, "Basic") == 0) {
            basicCount++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Standard") == 0) {
            standardCount++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].type, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subs[i].cost;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n",
           basicCount, basicRevenue, standardCount, standardRevenue, premiumCount, premiumRevenue);

    return 0;
}
