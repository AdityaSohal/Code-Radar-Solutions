#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    float threshold;

    // Input the number of books
    scanf("%d", &n);
    struct Book books[n];

    // Taking input for books
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    // Input the price threshold
    scanf("%f", &threshold);

    // Display books above the price threshold
    printf("Books above price %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
