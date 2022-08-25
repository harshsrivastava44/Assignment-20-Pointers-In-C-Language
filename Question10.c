//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
void lenghtstring(char *p)
{
    int i,j,l;
    char temp;
    for(l=0;p[l]!='\n';l++);
    for ( i = 0; i<l/2; i++)
       {
            temp=p[i];
            p[i]=p[l-1-i];
            p[l-1-i]=temp;
          }
    printf("%s",p);   

}
int main()
{
    char str[20];
    printf("Enter a string :\n");
    fgets(str,20,stdin);
    lenghtstring(str);
}