text

\# Linked List Implementation in C



\## Code Overview

This program implements a singly linked list with three nodes.



\## Operations Demonstrated

\- Node creation using structures

\- Dynamic memory allocation (malloc)

\- Linking nodes

\- Traversal



\## Code Explanation

```c

struct Node {

&nbsp;   int data;

&nbsp;   struct Node\* next;  // Pointer to next node

};



// Creating nodes

head->data = 1;

head->next = second;  // Linking nodes

How to Compile and Run

bash

gcc linkedlist.c -o linkedlist

./linkedlist

Sample Output

text

Linked List: 1 2 3 

Time Complexity

Traversal: O(n)



Access: O(n)



Insertion at beginning: O(1)



Deletion at beginning: O(1)



Insertion at end: O(n)



Space Complexity

O(n) where n is number of nodes



Real-World Applications

Music player playlists



Web browser history



Image viewer slideshows



Undo/Redo functionality

