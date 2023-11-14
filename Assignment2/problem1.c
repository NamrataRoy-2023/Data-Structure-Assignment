///Write a C program to read a 2D array (with most of the elements as 0s) and then represent the same array as Sparse Metrics.///
#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[10][10],count = 0;
   printf("Enter number of rows : ");
   scanf("%d",&row);
   printf("Enter number of Columns : ");
   scanf("%d",&col);
   printf("Enter Element of Matrix : \n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
      	printf("matrix[%d][%d] : ",i+1,j+1);
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are: \n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   /*checking sparse of matrix*/
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix");
   else
      printf("Matrix is not sparse matrix");
}
