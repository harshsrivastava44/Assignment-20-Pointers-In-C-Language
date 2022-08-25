//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size)
{  
    int i,j,temp=0;
    printf("Eter element of the array :\n");
    for(i=0;i<size;i++)
    scanf("%d",&ptr[i]);

    for(i=0;i<size-1;i++)
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
int main()
{
    int a[10],x,i;
    printf("Enter the size of Array\n");
    scanf("%d",&x);
    sort(a,x);
    for (i = 0; i <x; i++)
     printf("%d ",a[i]);
}