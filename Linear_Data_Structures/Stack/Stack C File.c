#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int value) {
    if(top < MAX-1) {
        stack[++top] = value;
        printf("Pushed: %d\n", value);
    } else {
        printf("Stack Overflow!\n");
    }
}

int pop() {
    if(top >= 0) {
        return stack[top--];
    }
    return -1;
}

void display() {
    int i;
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for(i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped: %d\n", pop());
    display();
    
    getchar();
    return 0;
}