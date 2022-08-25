//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int maxNum(int *ptr,int *q)
{
     int i,maxnum;
     for(i=*ptr+1;i<*q;i++)
     maxnum++;
     
   return maxnum;
}
int main()
{
    int firstnum,lastnum;
    printf("Enter first number :\n");
    scanf("%d",&firstnum);
    
    printf("Enter last number :\n");
    scanf("%d",&lastnum);
    printf("Maximum between %d and %d is ==%d",firstnum,lastnum,maxNum(&firstnum,&lastnum));
  return 0;
}