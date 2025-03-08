#include <stdio.h>

struct Library {
    char name[50];
    char author[50];
    float price;
};

int main() {
    int n;
    float thresh;
    scanf("%d", &n);
    struct Library book[n];

    // Input book details
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", book[i].name, book[i].author, &book[i].price);
    }
    
    // Input threshold price
    scanf("%f", &thresh);

    // Print books above threshold price
    printf("Books above price %.2f:\n", thresh);
    for (int i = 0; i < n; i++) {
        if (book[i].price > thresh) {
            printf("%s %s %.2f\n", book[i].name, book[i].author, book[i].price);
        }
    }

    return 0;
}
