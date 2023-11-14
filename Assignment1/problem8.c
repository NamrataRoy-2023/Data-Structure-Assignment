///8. Write a program that reads a 2D metrics and checks if the metrics is a symmetric metrics or not///
#include <stdio.h>
int main(){
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    // Declare array to store metric values
    float matrix[rows][cols];
    // Read metric from user input
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("matrix[%d][%d]: ", i+1, j+1);
            scanf("%f",&matrix[i][j]);
        }
    }
            // Checking symmetry
            for (i = 0; i < rows; ++i) {
                for (j = 0; j < cols; ++j) {
                    if (matrix[i][j] != matrix[j][i]){
                        printf("The given matrix is not symmetric.\n");
                        return 0;
                    }
                }
            }
            printf("The given matrix is symmetric.\n");
}
