//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
void string(char *ptr)
{
   int i,countVow=0,countCons=0,j,flag=0;
   char v[5]={'a','e','i','o','u'};
   for(i=0;ptr[i];i++)
    {   
        flag=0;
        for ( j = 0; j<5; j++)
        {
            if(ptr[i]==v[j]&&ptr[i]!=' ')
            {
            countVow++;
            flag=1;
            }
        }
        if(flag==0 && ptr[i]!=' ' )
        countCons++;
      
    }
    printf("The number of vowels =%d \nnumber of consonants is = %d",countVow,countCons);

}
int main()
{
    char str[20];
    printf("Enter a string :\n");
    gets(str);
    string(str);
    return 0;
}