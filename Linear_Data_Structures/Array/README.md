# Array Implementation in C

## Code Overview
This program demonstrates array implementation including:
- One-dimensional array (marks of students)
- Two-dimensional array (matrix)

## Operations Demonstrated
- Array initialization
- Traversal (displaying elements)
- Random access using index

## Code Explanation
```c
int marks[5] = {85, 90, 78, 92, 88};  // 1D array
int matrix[2][3] = {{1,2,3}, {4,5,6}}; // 2D array
How to Compile and Run
bash
gcc Arrays.c -o array
./array
Sample Output
text
Array elements:
marks[0] = 85
marks[1] = 90
marks[2] = 78
marks[3] = 92
marks[4] = 88

Matrix elements:
1 2 3 
4 5 6 
Time Complexity
Access: O(1)

Traversal: O(n)

Insertion at end: O(1)

Insertion at beginning: O(n)

Space Complexity
O(n) where n is the number of elements

Real-World Applications
Student grade management

Image processing (pixels)

Game boards (chess, tic-tac-toe)

Scientific calculation


