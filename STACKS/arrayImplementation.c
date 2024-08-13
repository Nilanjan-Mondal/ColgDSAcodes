#include <stdio.h>
#include <stdbool.h>  
#include <limits.h>  

#define MAX_SIZE 100


int items[MAX_SIZE];
int idx = -1;  


bool isFull() {
    return idx == MAX_SIZE - 1;
}

bool isEmpty() {
    return idx == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        idx++;
        items[idx] = value;
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return INT_MIN;  
    } else {
        int poppedItem = items[idx];
        idx--;
        return poppedItem;
    }
}
int top() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return INT_MIN;  
    } else {
        return items[idx];
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = idx; i >= 0; i--) {
            printf("%d\n", items[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Top element: %d\n", top());

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    display();

    return 0;
}
