#include<stdio.h>
int max_num_in_array(int arr[],int size);
int min_num_in_array(int arr[],int size);

int main()
{
    int arr[10] = {1,2,3,4,15,1,0,3,4,5};
    int max = max_num_in_array(arr,10);
    printf("max num in array is : %d\n",max);
     int min = min_num_in_array(arr,10);
    printf("min num in array is : %d",min);


    return 0;
}

int max_num_in_array(int arr[],int size)
{
    int i,max = arr[0];
    for (i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int min_num_in_array(int arr[],int size)
{
    int i,min = arr[0];
    for (i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
