\# Stack Implementation in C



\## Code Overview

This program implements a stack using array with LIFO (Last In First Out) principle.



\## Operations Demonstrated

\- push() - Add element to top

\- pop() - Remove element from top

\- display() - Show all elements



\## Code Explanation

```c

int stack\[MAX];  // Array to store stack

int top = -1;    // Top indicator (-1 means empty)



void push(int value) {

&nbsp;   stack\[++top] = value;  // Increment top, then add

}



int pop() {

&nbsp;   return stack\[top--];   // Return top, then decrement

}

How to Compile and Run

bash

gcc stack.c -o stack

./stack

Sample Output

text

Pushed: 10

Pushed: 20

Pushed: 30

Stack elements: 10 20 30 

Popped: 30

Stack elements: 10 20 

Time Complexity

push(): O(1)



pop(): O(1)



peek(): O(1)



display(): O(n)



Space Complexity

O(n) where n is maximum size of stack



Real-World Applications

Undo/Redo in text editors



Function call management



Browser back button



Expression evaluation

