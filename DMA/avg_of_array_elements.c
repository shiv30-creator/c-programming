#include<stdio.h>
#include<stdlib.h>
int avg(int *num,int size);

int main()
{
    int size;
    printf("enter the size of numbers : ");
    scanf("%d",&size);
    printf("enter the numbers : ");
    int *num;
    num = (int*)malloc(size * sizeof(int));
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }

    int average =avg(num,size);
    printf("average of array elements: %d",average);
    free(num);
    return 0;
}
int avg(int *num,int size)
{
    int add=0;
    for(int i =0; i<size; i++)
    {
        add +=  num[i];
    }
    int avg = add / size;
   return avg;
}
