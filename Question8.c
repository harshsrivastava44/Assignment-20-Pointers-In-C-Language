//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int computeSum(int *ptr,int size)
{    
    int i,sum=0;
    for(i=0;i<size;i++)
      sum=sum+ptr[i];   

    return sum;
}
int main()
{
    int arr[10];
    int x,i,s=0;
    printf("Enter the size of Array :\n");
    scanf("%d",&x);
    printf("Enter elements of Array :\n");
    for(i=0;i<x;i++)
    scanf("%d",&arr[i]);
    s=computeSum(arr,x);
   
    printf("sum of all elements of array is =%d",s);
    return 0;

}