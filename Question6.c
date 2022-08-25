//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int lenghtstring(char *p)
{
    int i,l;
    for ( i = 0; p[i]; i++);
     return i;   

}
int main()
{
    char str[20];
    printf("Enter a string :\n");
    gets(str);
    printf("lenght of the string =%d",lenghtstring(str));
}