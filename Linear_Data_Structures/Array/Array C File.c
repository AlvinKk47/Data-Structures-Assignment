#include <stdio.h>

int main() {
    // One-dimensional array
    int marks[5] = {85, 90, 78, 92, 88};
    int i;
    
    printf("Array elements:\n");
    for(i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }
    
    // Two-dimensional array
    int matrix[2][3] = {{1,2,3}, {4,5,6}};
    int j;
    printf("\nMatrix elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    getchar(); // Pause to see output
    return 0;
}