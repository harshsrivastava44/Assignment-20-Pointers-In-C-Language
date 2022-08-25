//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
int  swapstring(char* ,char*);
int main()
{
    char a[20],b[20];
    printf("Enter first string\n");
    fgets(a,20,stdin);
    printf("Enter second string\n");
    fgets(b,20,stdin);
    swapstring(a,b);
    printf("a=%s and b=%s",a,b);
    return 0;

}
int swapstring(char *p,char *q)
{
      char c=0;
      int i;
      for ( i = 0;*(p+i); i++)
      {
           c=p[i];
           p[i]=q[i];
           q[i]=c;
       }
      
}