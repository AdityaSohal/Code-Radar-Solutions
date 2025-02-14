#include <stdio.h>

// Function prototypes
void bubblesort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Read size of array

    int arr[n];  // Declare array with size n
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Read array elements
    }

    bubblesort(arr, n);  // Call bubble sort
    printf("Sorted array: ");
    printArray(arr, n);  // Print sorted array

    return 0;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])  // Swap if current is greater than next
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  // Print each element
    }
    printf("\n");
}
