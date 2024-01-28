///write a c program to show that quick sort is better than bubble sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 10000; // Adjust the size as needed
    int arr_quick[size], arr_bubble[size];
    
    // Seed for random number generation
    srand(time(NULL));

    // Initialize arrays with random numbers
    for (int i = 0; i < size; i++) {
        arr_quick[i] = arr_bubble[i] = rand() % 1000;
    }

    // Measure time taken by Quick Sort
    clock_t start_quick = clock();
    quickSort(arr_quick, 0, size - 1);
    clock_t end_quick = clock();
    double cpu_time_quick = ((double) (end_quick - start_quick)) / CLOCKS_PER_SEC;

    // Measure time taken by Bubble Sort
    clock_t start_bubble = clock();
    bubbleSort(arr_bubble, size);
    clock_t end_bubble = clock();
    double cpu_time_bubble = ((double) (end_bubble - start_bubble)) / CLOCKS_PER_SEC;

    printf("Quick Sort Time: %f seconds\n", cpu_time_quick);
    printf("Bubble Sort Time: %f seconds\n", cpu_time_bubble);

    return 0;
}
