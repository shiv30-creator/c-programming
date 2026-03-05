#include<stdio.h>

void print_array(int arr[],int size);
int main()
{
    int arr[10] = {1,2,3,4,5,1,2,3,4,5};
    print_array(arr,10);

    return 0;
}
void print_array(int arr[],int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}
