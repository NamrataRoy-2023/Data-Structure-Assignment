# Data-Structure-Assignment
in this repository I am going to add all assignments of Data Structure Using C Programming Language.
ASSIGNMENT 1
1.	Write a C program to print an array.

CODE

#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    printf("Array elements: ");
    printArray(myArray, maxSize);
    return 0;
}

OUTPUT

 


2.	Write a C program to check whether a given string is Palindrome or not.

CODE

#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    if (isPalindrome(inputString)) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }
    return 0;
}

OUTPUT

 




3.	Write a C program to convert temperature from degree Centigrade to Fahrenheit.

CODE

#include <stdio.h>
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}

OUTPUT

 

4.	Write a C program to sort an array.

CODE
#include <stdio.h>
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    bubbleSort(myArray, maxSize);
    printf("Sorted array: ");
    printArray(myArray, maxSize);
    return 0;
}
OUTPUT
 


5.	Write a C program to print the largest and second largest element of the array.

CODE
#include <stdio.h>
void findLargestAndSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[1];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Largest Element: %d\n", largest);
    printf("Second Largest Element: %d\n", secondLargest);
}
int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    findLargestAndSecondLargest(myArray, maxSize);
    return 0;
}

OUTPUT
 


6.	Write a C program to display Fibonacci series.

CODE

#include <stdio.h>
void displayFibonacci(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci Series up to %d terms: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}
int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);
    displayFibonacci(terms);
    return 0;
}

OUTPUT

 


7.	Write a program that reads two 2D metrices from the console, verifies if metrics
multiplication is possible or not. Then multiplies the metrices and prints the 3rd metrics.

CODE

#include <stdio.h>
void readMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[10][10], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int resultMatrix[10][10], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
int main() {
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    readMatrix(firstMatrix, rows1, cols1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);
    readMatrix(secondMatrix, rows2, cols2);
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rows1, cols1, rows2, cols2);
    printf("Result of matrix multiplication:\n");
    printMatrix(resultMatrix, rows1, cols2);
    return 0;
}
OUTPUT

 


8.	Write a program that reads a 2D metrics and checks if the metrics is a symmetric metrics or not.

CODE

#include <stdio.h>
void readMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
int isSymmetric(int matrix[10][10], int rows, int cols) {
    if (rows != cols) {
        return 0; 
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; 
            }
        }
    }
    return 1; // Symmetric
}
int main() {
    int myMatrix[10][10];
    int rows, cols;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);
    readMatrix(myMatrix, rows, cols);
    if (isSymmetric(myMatrix, rows, cols)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
OUTPUT
 





9.	Write a C program to print reverse array.

CODE

#include <stdio.h>
void printReverseArray(int arr[], int size) {
    printf("Reverse of the array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    printReverseArray(myArray, maxSize);
    return 0;
}

OUTPUT

 




10.	Write a C program to check the sum of all elements of an array.

CODE

#include <stdio.h>
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    int sum = calculateSum(myArray, maxSize);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
OUTPUT
 


11.	Write a C program to check duplicate number in an array.

CODE
#include <stdio.h>
void checkDuplicates(int arr[], int size) {
    int foundDuplicate = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                if (!foundDuplicate) {
                    printf("Duplicate numbers found: ");
                    foundDuplicate = 1;
                }
                printf("%d, ", arr[i]);
                break; 
            }
        }
    }
    if (!foundDuplicate) {
        printf("No duplicate numbers found in the array.\n");
    } else {
        printf("\n");
    }
}
int main() {
    int maxSize;
    printf("Enter the size of the array: ");
    scanf("%d", &maxSize);
    int myArray[maxSize];
    printf("Enter %d elements for the array:\n", maxSize);
    for (int i = 0; i < maxSize; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    checkDuplicates(myArray, maxSize);
    return 0;
}

OUTPUT	

 
ASSIGNMENT 2

1.	Write a C program to read a 2D array (with most of the elements as 0s) and then represent the same array as Sparse Metrics.

CODE
#include <stdio.h>
#define max_row 10
#define max_col 10
#define max_element max_row * max_col
void SparseMatrix(int arr[max_row][max_col], int rows, int cols) {
    int sparse[3][max_element], k = 0,i,j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            if (arr[i][j] != 0) {
                sparse[0][k] = i;
                sparse[1][k] = j;
                sparse[2][k] = arr[i][j];
                k++;
            }
        }
    }
    printf("\nSparse Matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < k; ++j) {
            printf("%d ", sparse[i][j]);
        }
        printf("\n");
    }
}
void main() {
    int rows, cols,i,j;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Cols: ");
    scanf("%d", &cols);
    int array[max_row][max_col];
    printf("Enter elements:\n");
    for (i = 0; i < rows; ++i){
        for (j = 0; j < cols; ++j){
        	scanf("%d", &array[i][j]);
		}
	}
    printf("\nInput Array:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j){
        	printf("%d ", array[i][j]);
		}
        printf("\n");
    }
    SparseMatrix(array, rows, cols);
}

OUTPUT

 



2.	Write a C program to pass an array to a function using Call by Value, update the array values in the function, print the array elements both in the function and in the calling function.

CODE
#include <stdio.h>
void updateAndPrint(int arr[], int n) {
    int i;
    printf("\nUpdating array elements in the function:\n");
    for (i = 0; i < n; ++i) {
        arr[i] *= 2;
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main() {
    int n,i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements before calling the function:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    updateAndPrint(arr, n);
}
OUTPUT

 



3.	Write a C program to pass an array to a function using Call by Reference, update the array values in the function, print the array elements both in the function  and in the calling function.

CODE
#include <stdio.h>
void updateAndPrint(int *arr, int n) {
    int i;
    printf("\nUpdating array elements in the function:\n");
    for (i = 0; i < n; ++i) {
        arr[i] *= 2;
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n,i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements before calling the function:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    updateAndPrint(arr, n);
    return 0;
}

OUTPUT

 



4.	Write a program to display n number of elements. Memory should be allocated dynamically using malloc( ).

CODE
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of the array:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

OUTPUT

 


5.	Write a program to display n number of elements. Memory should be allocated dynamically using calloc( ).

CODE
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of the array:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

OUTPUT

 


6.	Write a program to allocate memory using malloc( ) and then reallocate the previously allocated memory using realloc( ). Display the elements which have been taken after reallocation.

CODE

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, new_size,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements before reallocation:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the new size for reallocation: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; 
    }
    printf("Enter %d additional elements:\n", new_size - n);
    for (i = n; i < new_size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements after reallocation:\n");
    for (i = 0; i < new_size; ++i) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

OUTPUT

 


7.	Write a program to allocate memory using calloc( ) and then reallocate the previously allocated memory using realloc( ). Display the elements which have been taken after reallocation.

CODE

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, new_size,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("\nElements before reallocation:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the new size for reallocation: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; 
    }
    printf("Enter %d additional elements:\n", new_size - n);
    for (i = n; i < new_size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements after reallocation:\n");
    for (i = 0; i < new_size; ++i) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
OUTPUT
 
8.	Write a C program to search an element in an Array using dynamic memory allocation.

CODE
#include <stdio.h>
#include <stdlib.h>
int searchElement(int *arr, int size, int key) {
	int i;
    for (i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int n, key,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int index = searchElement(arr, n, key);
    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    free(arr);
    return 0;
}
OUTPUT

 
ASSIGNMENT 3
1.	Write a Menu driven C program to accomplish the following functionalities in single linked list.
a) Create a single linked list.
b) Display the elements of a single linked list.
c) Insert a node at the beginning of a single linked list.
d) Insert a node at the end of a single linked list.
e) Insert a node before a given node of a single linked list.
f) Insert a node after a given node of a single linked list.
g) Delete a node from the beginning of a single linked list.
h) Delete a node from the end of a single linked list.
i) Delete a node after a given node of a single linked list.
j) Delete the entire single linked list.
CODE
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void displayList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
struct Node* insertBeforeNode(struct Node* head, int data, int targetData) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    if (head->data == targetData) {
        newNode->next = head;
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL && current->next->data != targetData) {
        current = current->next;
    }
    if (current->next == NULL) {
        printf("Node with data %d not found.\n", targetData);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
struct Node* insertAfterNode(struct Node* head, int data, int targetData) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current != NULL && current->data != targetData) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Node with data %d not found.\n", targetData);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty, cannot delete.\n");
        return NULL;
    }
    struct Node* newHead = head->next;
    free(head);
    return newHead;
}
struct Node* deleteFromEnd(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty, cannot delete.\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
    return head;
}

struct Node* deleteAfterNode(struct Node* head, int targetData) {
    if (head == NULL || head->next == NULL) {
        printf("Linked list has insufficient nodes, cannot delete.\n");
        return head;
    }
    struct Node* current = head;
    while (current != NULL && current->data != targetData) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) {
        printf("Node with data %d not found or there is no node after it.\n", targetData);
        return head;
    }
    struct Node* nodeToDelete = current->next;
    current->next = current->next->next;
    free(nodeToDelete);
    return head;
}
void deleteLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }
}
int main() {
    struct Node* head = NULL;
    int choice, data, targetData;
    do {
        printf("\nMenu:\n");
        printf("1. Create a single linked list\n");
        printf("2. Display the elements of the linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node before a given node\n");
        printf("6. Insert a node after a given node\n");
        printf("7. Delete a node from the beginning\n");
        printf("8. Delete a node from the end\n");
        printf("9. Delete a node after a given node\n");
        printf("10. Delete the entire linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data for the first node: ");
                scanf("%d", &data);
                head = createNode(data);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                break;
            case 4:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;
            case 5:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = insertBeforeNode(head, data, targetData);
                break;
            case 6:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = insertAfterNode(head, data, targetData);
                break;
            case 7:
                head = deleteFromBeginning(head);
                break;
            case 8:
                head = deleteFromEnd(head);
                break;
            case 9:
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = deleteAfterNode(head, targetData);
                break;
            case 10:
                deleteLinkedList(head);
                head = NULL;
                break;
            case 0:
                deleteLinkedList(head);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        if (choice != 2 && choice != 0) {
            displayList(head);
        }
    } while (choice != 0);
    return 0;
}
OUTPUT
    
   
   
   
 







2.	Write a Menu driven C program to accomplish the following functionalities in circular
linked list.
a) Create a circular linked list.
b) Display the elements of a circular linked list.
c) Insert a node at the beginning of a circular linked list.
d) Insert a node at the end of a circular linked list.
e) Delete a node from the beginning of a circular linked list.
f) Delete a node from the end of a circular linked list.
g) Delete a node after a given node of a circular linked list.
h) Delete the entire circular linked list.

CODE
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* createCircularLinkedList();
void displayCircularList(struct Node* head);
struct Node* insertAtBeginning(struct Node* head, int value);
struct Node* insertAtEnd(struct Node* head, int value);
struct Node* deleteFromBeginning(struct Node* head);
struct Node* deleteFromEnd(struct Node* head);
struct Node* deleteAfterNode(struct Node* head, int key);
void deleteEntireList(struct Node** head);
int main() {
    struct Node* head = NULL;
    int choice, value, key;
    do {
        printf("\n---- Circular Linked List Operations ----\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display elements\n");
        printf("3. Insert at the beginning\n");
        printf("4. Insert at the end\n");
        printf("5. Delete from the beginning\n");
        printf("6. Delete from the end\n");
        printf("7. Delete after a given node\n");
        printf("8. Delete entire list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: head = createCircularLinkedList(); break;
            case 2: displayCircularList(head); break;
            case 3: printf("Enter value: "); scanf("%d", &value); head = insertAtBeginning(head, value); break;
            case 4: printf("Enter value: "); scanf("%d", &value); head = insertAtEnd(head, value); break;
            case 5: head = deleteFromBeginning(head); break;
            case 6: head = deleteFromEnd(head); break;
            case 7: printf("Enter key: "); scanf("%d", &key); head = deleteAfterNode(head, key); break;
            case 8: deleteEntireList(&head); break;
            case 0: printf("Exiting. Goodbye!\n"); break;
            default: printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
struct Node* createCircularLinkedList() {
    struct Node* head = NULL, * temp = NULL;
    int n, value;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = head;
        if (!head) head = newNode;
        else temp->next = newNode;
        temp = newNode;
    }
    printf("Circular linked list created successfully.\n");
    return head;
}
void displayCircularList(struct Node* head) {
    if (!head) printf("The list is empty.\n");
    else {
        struct Node* current = head;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }
}
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (!head) newNode->next = newNode;
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
    printf("Node inserted at the beginning successfully.\n");
    return head;
}
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (!head) newNode->next = newNode;
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    printf("Node inserted at the end successfully.\n");
    return head;
}
struct Node* deleteFromBeginning(struct Node* head) {
    if (!head) printf("The list is already empty.\n");
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;

        if (head->next == head) {
            free(head);
            head = NULL;
        } else {
            temp->next = head->next;
            free(head);
            head = temp->next;
        }
        printf("Node deleted from the beginning successfully.\n");
    }
    return head;
}
struct Node* deleteFromEnd(struct Node* head) {
    if (!head) printf("The list is already empty.\n");
    else {
        struct Node* temp = head, * prev = NULL;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        if (head->next == head) {
            free(head);
            head = NULL;
        } else {
            prev->next = head;
            free(temp);
        }
        printf("Node deleted from the end successfully.\n");
    }
    return head;
}
struct Node* deleteAfterNode(struct Node* head, int key) {
    if (!head) printf("The list is empty.\n");
    else {
        struct Node* temp = head, * prev = NULL;
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != key);

        if (temp == head) printf("Node with key %d not found.\n", key);
        else {
            prev->next = temp->next;
            free(temp);
            printf("Node deleted after key %d successfully.\n", key);
        }
    }
    return head;
}
void deleteEntireList(struct Node** head) {
    struct Node* current = *head, * next;

    while (current && current->next != *head) {
        next = current->next;
        free(current);
        current = next;
    }
    free(current);
    *head = NULL;
    printf("Entire list deleted successfully.\n");
}

OUTPUT

  

 
 
  
 
 
 







ASSIGNMENT 4
1.	Write a Menu driven C program to accomplish the following functionalities in doubly linked list.
a) Create a doubly linked list.
b) Display the elements of a doubly linked list.
c) Insert a node at the beginning of a doubly linked list.
d) Insert a node at the end of a doubly linked list.
e) Insert a node before a given node of a doubly linked list.
f) Insert a node after a given node of a doubly linked list.
g) Delete a node from the beginning of a doubly linked list.
h) Delete a node from the end of a doubly linked list.
i) Delete a node after a given node of a doubly linked list.
j) Delete the entire doubly linked list.
CODE
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insertBeginning(struct node *head, int var){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL){
        head = temp;
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}
struct node *insertEnd(struct node *head, int var){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL) {
        head = temp;
    }
    else {
        struct node *loop = head;
        while (loop->next != NULL){
            loop = loop->next;
        }
        loop->next = temp;
        temp->prev = loop;
    }
    return head;
}
struct node *insertBeforeNode(struct node *head, int var, int addbefore){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL){
        head = temp;
    }
    else if (head->data == addbefore){
        head = insertBeginning(head, var);
    }
    else{
        struct node *loop = head;
        struct node *loop1 = head;
        while (loop->next->data != addbefore) {
            loop = loop->next;
            loop1 = loop1->next;
        }
        loop1 = loop1->next;
        loop->next = temp;
        temp->prev = loop;
        temp->next = loop1;
        loop1->prev = temp;
    }
    return head;
}
struct node *insertAfterNode(struct node *head, int var, int addafter){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL){
        head = temp;
    }
    else {
        struct node *loop = head;
        struct node *loop1 = head;
        while (loop->data != addafter){
            loop = loop->next;
            loop1 = loop1->next;
        }
        loop1 = loop1->next;
        if (loop->next == NULL){
            loop->next = temp;
            temp->prev = loop;
            return head;
        }
        loop->next = temp;
        temp->prev = loop;
        temp->next = loop1;
        loop1->prev = temp;
    }
    return head;
}
struct node *deleteBeginning(struct node *head){
    if (head == NULL){
        printf("Linked List is Already Empty\n");
    }
    else if (head->next == NULL) {
        head = NULL;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }
    return head;
}
struct node *deleteEnd(struct node *head){
    if (head == NULL) {
        printf("Linked List is Already Empty\n");
    }
    else if (head->next == NULL){
        head = NULL;
    }
    else{
        struct node *loop = head;
        while (loop->next->next != NULL){
            loop = loop->next;
        }
        loop->next = NULL;
    }
    return head;
}
struct node *deleteAfterNode(struct node *head, int deleteafter)
{
    if (head == NULL) {
        printf("Linked List is Already Empty");
    }
    else{
        struct node *loop = head;
        while (loop->data != deleteafter)
        {
            loop = loop->next;
        }
        if (loop->next == NULL){
            return head;
        }
        else if (loop->next->next != NULL){
            struct node *temp = loop;
            temp = temp->next->next;
            loop->next = temp;
            temp->prev = loop;
        }
        else{
            loop->next = NULL;
        }
    }
    return head;
}

void display(struct node *head){
    printf("Your Linked List:\n");
    struct node *disp = head;
    while (disp != NULL){
        printf("%d ", disp->data);
        disp = disp->next;
    }
}
int main(){
    struct node *head = NULL;
    while (1){
        int ch, num, n;
        printf("1. Insert at Beginning\n2. Insert at End\n");
        printf("3. Insert Before a Node\n4. Insert After a Node\n");
        printf("5. Delete from Beginning\n6. Delete from End\n");
        printf("7. Delete After a Node\n8. Delete All:\n");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            printf("Enter Data: ");
            scanf("%d", &n);
            head = insertBeginning(head, n);
            break;
        case 2:
            printf("Enter Data: ");
            scanf("%d", &n);
            head = insertEnd(head, n);
            break;
        case 3:
            printf("Enter Data: ");
            scanf("%d", &n);
            printf("Before which Number? ");
            scanf("%d", &num);
            head = insertBeforeNode(head, n, num);
            break;
        case 4:
            printf("Enter Data: ");
            scanf("%d", &n);
            printf("After which Number? ");
            scanf("%d", &num);
            head = insertAfterNode(head, n, num);
            break;
        case 5:
            head = deleteBeginning(head);
            break;
        case 6:
            head = deleteEnd(head);
            break;
        case 7:
            printf("After which Number? ");
            scanf("%d", &num);
            head = deleteAfterNode(head, num);
            break;
        case 8:
            head = NULL;
        }
        display(head);
        int x;
        printf("\nDo you want to insert/delete more values?\n1. YES\n2. NO:\n");
        scanf("%d", &x);
        if (x == 2){
            exit(0);
        }
    }
    return 0;
}
OUTPUT
   
   


2.	Write a Menu driven C program to accomplish the following functionalities in circular doubly linked list.
a) Create a circular doubly linked list.
b) Display the elements of a circular doubly linked list.
c) Insert a node at the beginning of a circular doubly linked list.
d) Insert a node at the end of a circular doubly linked list.
e) Delete a node from the beginning of a circular doubly linked list.
f) Delete a node from the end of a circular doubly linked list.
g) Delete a node after a given node of a circular doubly linked list.
h) Delete the entire circular doubly linked list.

CODE
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insertBeginning(struct node *head, int var)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->next = temp;
    temp->prev = temp;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *t = head;
        t = t->prev;

        temp->next = head;
        temp->prev = t;
        head->prev = temp;
        t->next = temp;
        head = temp;
    }
    return head;
}

struct node *insertEnd(struct node *head, int var)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = var;
    temp->next = temp;
    temp->prev = temp;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *t = head;
        t = t->prev;

        t->next = temp;
        temp->prev = t;
        temp->next = head;
        head->prev = temp;
    }
    return head;
}

struct node *deleteBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is Already Empty\n");
    }
    else if (head->next == head)
    {
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        temp = temp->prev;

        head = head->next;
        temp->next = head;
        head->prev = temp;
    }
    return head;
}

struct node *deleteEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is Already Empty\n");
    }
    else if (head->next == head)
    {
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        temp = temp->prev->prev;

        temp->next = head;
        head->prev = temp;
    }
    return head;
}

struct node *deleteAfterNode(struct node *head, int deleteafter)
{
    if (head == NULL)
    {
        printf("Linked List is Already Empty\n");
    }
    else
    {
        struct node *loop = head;
        struct node *flag = head;
        while (loop->data != deleteafter)
        {
            if (loop->next == flag)
            {
                printf("Invalid Number");
                return head;
            }
            loop = loop->next;
        }
        if (loop->next == head)
        {
            head = deleteBeginning(head);
        }
        else
        {
            struct node *temp = loop;
            temp = temp->next->next;
            loop->next = temp;
            temp->prev = loop;
        }
    }
    return head;
}

void display(struct node *head)
{
    printf("Your Linked List:\n");
    if (head != NULL)
    {
        struct node *loop = head;
        do
        {
            printf("%d ", loop->data);
            loop = loop->next;
        } while (loop != head);
    }
}

int main()
{
    struct node *head = NULL;
    while (1)
    {
        int ch, num, n;
        printf("1. Insert at Beginning\n2. Insert at End\n");
        printf("3. Delete from Beginning\n4. Delete from End\n");
        printf("5. Delete After a Node\n6. Delete All:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &n);
            head = insertBeginning(head, n);
            break;
        case 2:
            printf("Enter Data: ");
            scanf("%d", &n);
            head = insertEnd(head, n);
            break;
        case 3:
            head = deleteBeginning(head);
            break;
        case 4:
            head = deleteEnd(head);
            break;
        case 5:
            printf("After which Number? ");
            scanf("%d", &num);
            head = deleteAfterNode(head, num);
            break;
        case 6:
            head = NULL;
        }
        display(head);
        int x;
        printf("\nDo you want to insert/delete more values?\n1. YES\n2. NO:\n");
        scanf("%d", &x);
        if (x == 2)
        {
            exit(0);
        }
    }
    return 0;
}

OUTPUT
   
   

ASSIGNMENT 5

1.	Write a Menu driven C program to accomplish the following functionalities in Queue using an Array:
a. Insert an element into the queue using an array (Enqueue Operation).
b. Delete an element from the queue using an array (Dequeue Operation).
c. Return the value of the FRONT element of the queue (without deleting it from the queue) using an array (Peep operation).
d. Display the elements of a queue using an array.

CODE
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159
int main(){
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d", &n);
	int ar[n];
	int ch;
	int front = -1, rear = -1;
	while (1){
		printf("1. Enqueue\n2. Dequeue\n3. Peek:\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			if (rear == n - 1){
				printf("Queue is Full\n");
			}
			else if (rear == -1){
				front = 0;
				rear = 0;
				printf("Enter Data: ");
				scanf("%d", &ar[rear]);
			}
			else{
				rear++;
				printf("Enter Data: ");
				scanf("%d", &ar[rear]);
			}
			break;
		case 2:
			if (front == -1){
				break;
			}
			else if (front == rear){
				front = -1;
				rear = -1;
			}
			else{
				for (int i = front; i <= rear; i++){
					ar[i] = ar[i + 1];
}
				rear--;
			}
			break;
		case 3:
			if (front != -1){
				printf("The First Value of the Queue is: %d\n", ar[front]);
			}
			else{
				printf("Queue is Empty\n");
			}
			break;
		}
		if (front == -1){
			printf("Queue is Empty\n");
		}
		else{
			printf("Your Queue:\n");
			for (int i = front; i <= rear; i++){
				printf("%d ", ar[i]);
			}
			printf("\n");
		}
		int x;
		printf("Do you want to modify the Queue?\n1. Yes\n2. No:\n");
		scanf("%d", &x);
		if (x == 2){
			exit(0);
		}
	}
	return 0;
}









OUTPUT:
   


2.	Write a Menu driven C program to accomplish the following functionalities in Queue using Linked List:
e. Insert an element into the queue using a Linked List (Enqueue Operation).
f. Delete an element from the queue using a Linked List (Dequeue Operation).
g. Return the value of the FRONT element of the queue (without deleting it from 
    the queue) using a Linked List (Peep operation).
h. Display the elements of a queue using a Linked List.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159
struct node{
	int data;
	struct node *link;
};
struct node *enqueue(struct node *head, int n, int var){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = var;
	temp->link = NULL;
	if (head == NULL){
		head = temp;
	}
	else{
		struct node *loop = head;
		int count = 0;
		while (loop->link != NULL){
			count++;
			loop = loop->link;
		}
		count++;
		if (count >= n){
			printf("Queue is Full\n");
		}
		else{
			loop->link = temp;
		}
	}
	return head;
}
struct node *dequeue(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else if (head->link == NULL){
		head = NULL;
	}
	else{
		head = head->link;
	}
	return head;
}
void peek(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else{
		printf("The First Value of the Queue is: %d\n", head->data);
	}
}
void display(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else{
		printf("Your Queue is:\n");
		struct node *loop = head;
		while (loop != NULL){
			printf("%d ", loop->data);
			loop = loop->link;
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d", &n);
	struct node *head = NULL;
	int ch, num;
	while (1){
		printf("1. Enqueue\n2. Dequeue\n3. Peek:\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter Data: ");
			scanf("%d", &num);
			head = enqueue(head, n, num);
			break;
		case 2:
			head = dequeue(head);
			break;
		case 3:
			peek(head);
			break;
		}
		display(head);
		int x;
		printf("Do you want to modify the Queue?\n1. Yes\n2. No:\n");
		scanf("%d", &x);
		if (x == 2){
			exit(0);
		}
	}
	return 0;
}


Output
     


3.	Write a Menu driven C program to accomplish the following functionalities in Circular Queue using Array:
i. Insert an element into the circular queue.
j. Delete an element from the circular queue.
k. Return the value of the FRONT element of the circular queue (without deleting it
    from the queue).
l. Display the elements of a circular queue using the circular queue.
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159
struct node{
	int data;
	struct node *link;
};
struct node *enqueue(struct node *head, int n, int var){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = var;
	temp->link = temp;
	if (head == NULL){
		head = temp;
	}
	else{
		struct node *loop = head;
		struct node *flag = head;
		int count = 0;
		while (loop->link != flag){
			loop = loop->link;
			count++;
		}
		count++;
		if (count >= n){
			printf("Queue is Full\n");
		}
		else{
			loop->link = temp;
			temp->link = flag;
		}
	}
	return head;
}
struct node *dequeue(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else if (head->link == head){
		head = NULL;
	}
	else{
		struct node *loop = head;
		while (loop->link != head){
			loop = loop->link;
		}
		head = head->link;
		loop->link = head;
	}
	return head;
}
void peek(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else{
		printf("The First Element of the Queue is: %d\n", head->data);
	}
}
void display(struct node *head){
	if (head == NULL){
		printf("Queue is Empty\n");
	}
	else{
		printf("Your Queue is: \n");
		struct node *loop = head;
		do{
			printf("%d ", loop->data);
			loop = loop->link;
		} while (loop != head);
		printf("\n");
	}
}
int main(){
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d", &n);
	struct node *head = NULL;
	int ch, num;
	while (1){
		printf("1. Enqueue\n2. Dequeue\n3. Peek:\n");
		scanf("%d", &ch);
		switch (ch){
		case 1:
			printf("Enter Data: ");
			scanf("%d", &num);
			head = enqueue(head, n, num);
			break;
		case 2:
			head = dequeue(head);
			break;
		case 3:
			peek(head);
			break;
		}
		display(head);
		int x;
		printf("Do you want to modify the Queue?\n1. Yes\n2. No:\n");
		scanf("%d", &x);
		if (x == 2){
			exit(0);
		}
	}
	return 0;
}

OUTPUT
             









ASSIGNMENT 6
1.	Write a Menu driven C program to accomplish the following functionalities in Stack using an Array:
a. Insert an element into the stack using an array (Push Operation).
b. Delete an element from the stack using an array (Pop Operation).
c. Return the value of the topmost element of the stack (without deleting it from the
     stack) using an array.
d. Display the elements of a stack using an array.

CODE
#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;
void initialize() {
    top = -1;
}
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX_SIZE - 1;
}
void push(int value) {
    if (isFull()) {
        printf("Stack overflow. Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}
void pop() {
    if (isEmpty()) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top]);
        top--;
    }
}
int peek() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    } else {
        return stack[top];
    }
}
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; ++i) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    initialize();
    int choice, value;
    do {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element: %d\n", value);
                }
                break;
            case 4:
              display();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

OUTPUT

 

 

 

 

 

2.	Write a Menu driven C program to accomplish the following functionalities in Stack using Linked List:
a. Insert an element into the stack using a Linked List (Push Operation).
b. Delete an element from the stack using a Linked List (Pop Operation).
c. Return the value of the topmost element of the stack (without deleting it from the
    stack) using a Linked List.
d. Display the elements of the stack using a Linked List.

CODE
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159
struct node{
    int data;
    struct node *link;
};
struct node *push(struct node *head, int n){
    if (head == NULL){
        int var;
        printf("Enter Data: ");
        scanf("%d", &var);
        struct node *temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = var;
        temp->link = NULL;
        head = temp;
    }
    else{
        struct node *loop = head;
        int count = 0;
        while (loop->link != NULL){
            loop = loop->link;
            count++;
        }
        count++;
        if (count >= n){
            printf("Stack is Full\n");
        }
        else{
            int var;
            printf("Enter Data: ");
            scanf("%d", &var);
            struct node *temp = (struct node *)malloc(sizeof(struct node *));
            temp->data = var;
            temp->link = NULL;
            loop->link = temp;
        }
    }
    return head;
}
struct node *pop(struct node *head){
    if (head == NULL){
        return head;
    }
    else if (head->link == NULL){
        head = NULL;
    }
    else{
        struct node *loop = head;
        while (loop->link->link != NULL){
            loop = loop->link;
        }
        loop->link = NULL;
    }
    return head;
}
void peek(struct node *head){
    if (head != NULL){
        struct node *loop = head;
        while (loop->link != NULL){
            loop = loop->link;
        }
        printf("The Topmost Element in this Stack is: %d\n", loop->data);
    }
}
void display(struct node *head){
    if (head == NULL){
        printf("Stack is Empty\n");
    }
    else{
        struct node *loop = head;
        while (loop != NULL)
        {
            printf("%d ", loop->data);
            loop = loop->link;
        }
    }
}
int main(){
    struct node *head = NULL;
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    while (1){
        int ch;
        printf("1. Push\n2. Pop\n3. Peek:\n");
        scanf("%d", &ch);
        switch (ch){
        case 1:
            head = push(head, n);
            break;
        case 2:
            head = pop(head);
            break;
        case 3:
            peek(head);
            break;
        }
        display(head);
        int x;
        printf("\nDo you want to modify the Stack?\n1. YES\n2. NO:\n");
        scanf("%d", &x);
        if (x == 2){
            exit(0);
        }
    }
    return 0;
}
OUTPUT
 
3.	Write a program to convert an infix expression into its equivalent postfix notation.
CODE
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct stack{
    char *ch;
    struct stack *next;
} stack;
stack *head = NULL;
int top = 1;
int max;
void push(char *x, int max){
    if (top <= max){
        stack *newnode;
        newnode = (stack *)malloc(sizeof(stack));
        newnode->ch = (char *)malloc(max * (sizeof(char)));
        strcpy(newnode->ch, x);
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;
        else{
            stack *tmp = head;
            newnode->next = tmp;
            head = newnode;
            top++;
  	}
    }
    else
        printf("Stack OVERFLOW!\n");
}
char *pop(){
    if (head == NULL){
        printf("Stack UNDERFLOW!\n");
        return " ";
    }
    else{
        char *s;
        stack *tmp;
        tmp = head->next;
        head->next = NULL;
        s = head->ch;
        free(head);
        head = tmp;
        top--;
        return s;
    }
}
void popall(){
    int i = 1;
    if (head == NULL)
        i = 0;
    else{
        stack *tmp;
        tmp = head->next;
        printf("%s", head->ch);
        head->next = NULL;
        free(head);
        head = tmp;
        top--;
    }
    if (i){
        popall();
}
int isOperator(char x){
    switch (x){
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
        return 1;
    }  return 0;
}
char *operate(char qs){
    char *a, *b, c[2];
    c[0] = qs;
    c[1] = '\0';
    a = pop();
    b = pop();
    strcat(a, b);
    strcat(a, c);
    return a;
}
void main(){
    char qs[100];
    printf("Enter Infix: ");
    scanf("%[^\n]s", qs);
    int length = strlen(qs);
    char *s = (char *)malloc(max * sizeof(char));
    char *q = (char *)malloc(sizeof(char));
    max = length;
    for (int i = length - 1; i >= 0; i--){
        q[0] = qs[i];
        q[1] = '\0';
        if (isOperator(qs[i])){
            s = operate(qs[i]);
            push(s, max);
        }
        else{
            push(q, max);
    }
    popall();
}
OUTPUT
 


4.	Write a program to convert an infix expression into its equivalent prefix notation.
CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_EXPRESSION_SIZE 100
typedef struct{
    char data[MAX_EXPRESSION_SIZE];
    int top;
} Stack;
void initialize(Stack *stack){
    stack->top = -1;
}
void push(Stack *stack, char item){
    if (stack->top == MAX_EXPRESSION_SIZE - 1){
        printf("Stack Overflow\n");
    }
    stack->data[++stack->top] = item;
}
char pop(Stack *stack){
    if (stack->top == -1){
        printf("Stack Underflow\n");
    }
    return stack->data[stack->top--];
}
int isOperator(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}
int getPrecedence(char operator){
    switch (operator){
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}
void reverseString(char *str){
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void infixToPrefix(char *infixExpression, char *prefixExpression){
    Stack operatorStack;
    initialize(&operatorStack);
    reverseString(infixExpression);
    for (int i = 0; i < strlen(infixExpression); i++){
        if (infixExpression[i] == '('){
            infixExpression[i] = ')';
        }
        else if (infixExpression[i] == ')'){
            infixExpression[i] = '(';
        }
    }
    int j = 0;
    for (int i = 0; i < strlen(infixExpression); i++){
        char currentChar = infixExpression[i];
        if (isalnum(currentChar)){
            prefixExpression[j++] = currentChar;
        }
        else if (currentChar == '('){
            push(&operatorStack, currentChar);
        }
        else if (currentChar == ')'){
            while (operatorStack.top != -1 && operatorStack.data[operatorStack.top] != '('){
                prefixExpression[j++] = pop(&operatorStack);
            }
            pop(&operatorStack);
        }
        else if (isOperator(currentChar)){
            while (operatorStack.top != -1 && operatorStack.data[operatorStack.top] != '(' &&
                   getPrecedence(operatorStack.data[operatorStack.top]) >= getPrecedence(currentChar){
                prefixExpression[j++] = pop(&operatorStack);
            }
            push(&operatorStack, currentChar);
        }
    }
    while (operatorStack.top != -1){
        prefixExpression[j++] = pop(&operatorStack);
    }
    prefixExpression[j] = '\0';
    reverseString(prefixExpression);
}
int main(){
    char infixExpression[MAX_EXPRESSION_SIZE];
    printf("Enter Infix: ");
    scanf("%s", infixExpression);
    char prefixExpression[MAX_EXPRESSION_SIZE];
    infixToPrefix(infixExpression, prefixExpression);
    printf("Prefix Expression: %s\n", prefixExpression);
    return 0;
}
OUTPUT
 



5.Write a program to evaluate a postfix expression.
CODE
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_EXPRESSION_SIZE 100
typedef struct{
    int data[MAX_EXPRESSION_SIZE];
    int top;
} Stack;
void initialize(Stack *stack){
    stack->top = -1;
}
void push(Stack *stack, int item){
    if (stack->top == MAX_EXPRESSION_SIZE - 1){
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = item;
}
int pop(Stack *stack){
    if (stack->top == -1){
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}
int evaluatePostfix(char *postfixExpression){
    Stack operandStack;
    initialize(&operandStack);
    for (int i = 0; postfixExpression[i] != '\0'; i++){
        char currentChar = postfixExpression[i];
        if (isdigit(currentChar)){
            push(&operandStack, currentChar - '0');
        }
        else if (currentChar == ' '){
            continue;
        }
        else{
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);
            switch (currentChar){
            case '+':
                push(&operandStack, operand1 + operand2);
                break;
            case '-':
                push(&operandStack, operand1 - operand2);
                break;
            case '*':
                push(&operandStack, operand1 * operand2);
                break;
            case '/':
                push(&operandStack, operand1 / operand2);
                break;
            default:
                printf("Invalid operator: %c\n", currentChar);
                exit(EXIT_FAILURE);
            }
        }
    }
    return pop(&operandStack);
}
int main(){
    char postfixExpression[MAX_EXPRESSION_SIZE];
    printf("Enter Postfix Expression:");
    scanf("%s", postfixExpression);
    int result = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", result);
    return 0;
}
OUTPUT
 


6.Write a program to evaluate a prefix expression.
CODE
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 50
int stack[MAX_SIZE];
int top = -1;
void initialize() {
    top = -1;
}
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX_SIZE - 1;
}
void push(int value) {
    if (isFull()) {
        printf("Stack overflow. Cannot push %d.\n", value);
    } else {
        stack[++top] = value;
    }
}
int pop() {
    if (isEmpty()) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return -1; // Return an invalid value
    } else {
        return stack[top--];
    }
}
int evaluatePrefix(char *expression) {
    int len = strlen(expression);
    for (int i = len - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else if (expression[i] == ' ') {
            continue;
        } else {
            int operand1 = pop();
            int operand2 = pop();
            switch (expression[i]) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    return -1; // Return an error code
            }
        }
    }
    return pop();
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter a prefix expression: ");
    scanf("%[^\n]%*c", expression);
    int result = evaluatePrefix(expression);
    if (result != -1) {
        printf("Result: %d\n", result);
    } else {
        printf("Error in evaluating the expression.\n");
    }
    return 0;
}

OUTPUT
           


7.Write a program to print the Fibonacci series using recursion.
CODE
int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
void printFibonacciSeries(int n){
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int main(){
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);
    printFibonacciSeries(terms);
    return 0;
}
OUTPUT
 



8.Write a program to solve the tower of Hanoi problem using recursion.
CODE
#include <stdio.h>
void towerOfHanoi(int n, char source, char auxiliary, char destination){
    if (n == 1){
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve the Tower of Hanoi problem with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

OUTPUT

 


