//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("enter the array elements");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        small=large=arr[0];
    if(arr[i]<small)
    small=arr[i];
    if(arr[i]>large)
    large=arr[i];
    printf("the largest and smallest elements are %d and %d",large,small);
    //Write your code here
  
    return 0;
}
