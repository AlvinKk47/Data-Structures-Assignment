#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if(rear < MAX-1) {
        if(front == -1) front = 0;
        queue[++rear] = value;
        printf("Enqueued: %d\n", value);
    } else {
        printf("Queue Overflow!\n");
    }
}

int dequeue() {
    int value;
    if(front <= rear && front != -1) {
        value = queue[front++];
        if(front > rear) {
            front = rear = -1;
        }
        return value;
    }
    return -1;
}

void display() {
    int i;
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for(i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();
    
    getchar();
    return 0;
}