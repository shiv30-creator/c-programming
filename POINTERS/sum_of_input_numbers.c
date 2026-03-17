#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("enter size of numbers : ");
    scanf("%d",&size);
    int *num;
    num = malloc(size * sizeof(int));
    printf("enter %d numbers : ",size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&num[i]);
    }
    int *ptr;
    ptr = num;
     int sum = 0;
    while(ptr < num+size)
    {
        sum += *ptr;
        ptr++;
    }
    printf("sum : %d\n",sum);
    free(num);
    return 0;
}
