//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swapnum(int *x,int *y);
int main()
{
   int a,b;
   printf("Enter the value of a and b \n");
   scanf("%d%d",&a,&b);
   swapnum(&a,&b);
   printf("the swap value of a=%d and b=%d",a,b);

   return 0;

}
void swapnum(int *x,int *y)
{
  int temp=0;
  temp=*x;
  *x=*y;
  *y=temp;

}