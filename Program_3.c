//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  int d[2][2],i,j;//Declare all the variables[row, col, array a(2D array), i] used in the code
   printf("enter the values for an array");
   for (i=0;i<2;i++)
   {for(j=0;j<2;j++)
   scanf("%d",&d[i][j]);}
   printf("entered values for an array are");
   for (i=0;i<2;i++)
   {for(j=0;j<2;j++)
   {printf("%d",d[i][j]);
   if(j==2)
  { printf("\n");}}}
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
  return 0;
}
