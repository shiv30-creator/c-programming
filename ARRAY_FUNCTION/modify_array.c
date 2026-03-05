#include<stdio.h>
void modify_array(int arr[],int size);
void print_array(int arr[],int size);

int main()
{
    int arr[10] = {1,2,3,4,15,1,0,3,4,5};

    print_array(arr,10);
    printf("\n");
    modify_array(arr,10);
    print_array(arr,10);

    return 0;
}

void modify_array(int arr[],int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] *= 5;
    }
}
void print_array(int arr[],int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
}
