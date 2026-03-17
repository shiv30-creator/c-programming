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
    int *start_ptr,*end_ptr;
    start_ptr = num;
    end_ptr = num + size - 1;
    int temp = 0;

    while(start_ptr < end_ptr)
    {
       temp = *start_ptr;
       *start_ptr = *end_ptr;
       *end_ptr = temp;
       start_ptr++;
       end_ptr--;
    }
    int *ptr = num;
    while(ptr < num+size)
    {
        printf("%d",*ptr);
        ptr++;
    }

    free(num);
    return 0;
}
