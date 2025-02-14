#include <stdio.h>

void bubblesort(int arr[], int n);  // Function prototype
void printArray(int arr[], int n);  // Function prototype

int main()
{
    int n;
    scanf("%d", &n);  // Read size of array
    int arr[n];  // Declare array with size n

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Read array elements
    }

    bubblesort(arr, n);  // Call bubble sort
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
