#include<stdio.h>

int sum_of_array(int arr[],int size);
int main()
{
    int arr[10] = {1,2,3,4,5,1,2,3,4,5};
    int sum = sum_of_array(arr,10);
    printf("%d ",sum);

    return 0;
}
int sum_of_array(int arr[],int size)
{
    int i,sum = 0;
    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
