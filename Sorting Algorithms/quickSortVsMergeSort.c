#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate an array of random integers
void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // Generating random integers between 0 and 999
    }
}

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort Algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge Function for Merge Sort
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort Algorithm
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    const int N = 100000; // Size of the array
    int arr1[N], arr2[N];
    clock_t start, end;
    double cpu_time_used_quick, cpu_time_used_merge;

    // Generate random array
    generateRandomArray(arr1, N);

    // Copy array for merge sort
    for (int i = 0; i < N; i++) {
        arr2[i] = arr1[i];
    }

    // Measure time for Quick Sort
    start = clock();
    quickSort(arr1, 0, N - 1);
    end = clock();
    cpu_time_used_quick = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Measure time for Merge Sort
    start = clock();
    mergeSort(arr2, 0, N - 1);
    end = clock();
    cpu_time_used_merge = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Output results
    printf("Time taken by Quick Sort: %lf seconds\n", cpu_time_used_quick);
    printf("Time taken by Merge Sort: %lf seconds\n", cpu_time_used_merge);

    return 0;
}
