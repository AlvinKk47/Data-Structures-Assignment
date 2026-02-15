\# Queue Implementation in C



\## Code Overview

This program implements a queue using array with FIFO (First In First Out) principle.



\## Operations Demonstrated

\- enqueue() - Add element at rear

\- dequeue() - Remove element from front

\- display() - Show all elements



\## Code Explanation

```c

int queue\[MAX];

int front = -1, rear = -1;  // Empty queue



void enqueue(int value) {

&nbsp;   if(front == -1) front = 0;

&nbsp;   queue\[++rear] = value;   // Add at rear

}



int dequeue() {

&nbsp;   return queue\[front++];   // Remove from front

}

How to Compile and Run

bash

gcc queue.c -o queue

./queue

Sample Output

text

Enqueued: 10

Enqueued: 20

Enqueued: 30

Queue elements: 10 20 30 

Dequeued: 10

Queue elements: 20 30 

Time Complexity

enqueue(): O(1)



dequeue(): O(1)



display(): O(n)



Space Complexity

O(n) where n is maximum size of queue



Real-World Applications

Printer spooling



Customer service ticketing



Message queues (WhatsApp)



CPU process scheduling

