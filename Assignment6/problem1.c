

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

    return 0;
}
