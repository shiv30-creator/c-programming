#include<stdio.h>
#include<stdlib.h>
int sum(int num[],int size);

int main()
{
    int size;
    printf("enter the size of numbers : ");
    scanf("%d",&size);
    printf("enter the numbers : ");
    int i,num[size];
    for(i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }

    int add =sum(num,size);
    printf("total sum of array elements: %d",add);
    return 0;
}
int sum(int num[],int size)
{
    int add=0;
    for(int i =0; i<size;i++)
    {
        add = add +  num[i];
    }
   return add;
}
