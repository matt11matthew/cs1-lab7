#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;

    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j;

    // Initialize swaps array with zeros
    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                swap(&arr[j], &arr[j+1]);

                // Increment swap count for the indices involved in the swap
//                swaps[j]++;
//                swaps[j+1]++;
                swaps[i]++;
            }
        }
    }
}

void printArray(int numbers[], int sz)
{
    int i;
    printf("Number array : ");
    for (i = 0;i<sz;++i)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");
}
int main() {

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    int swaps[n]; // Stores swaps done

    printArray(arr,n);

    bubbleSort(arr, n, swaps);

    printf("Number of swaps for each index:\n");
    for (int i = 0; i < n; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }
    printArray(arr,n);
    return 0;
}

