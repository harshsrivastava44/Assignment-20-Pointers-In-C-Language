//9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void ReverseArray(int *ptr,int size)
{    
    int i,j,temp=0;
    for(i=0;i<size-1;i++)
    {
      for(j=i+1;j<size;j++)
     { 
            
        if(ptr[i]>ptr[j])
        {
            temp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=temp;
        }
     }
    }
    for(i=size-1;i>=0;i--)
    printf("%d ",ptr[i]);
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
    ReverseArray(arr,x);
      
   return 0;
}