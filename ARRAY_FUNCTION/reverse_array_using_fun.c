#include<stdio.h>
void reverse_array(int arr[],int size);


int main()
{
    int arr[5] = {1,2,3,4,5};
    int i,size=arr[4];
    reverse_array(arr,5);

    for (i = 0; i < size; i++)
    {
        printf("%d  \n",arr[i]);
    }

    return 0;
}

void reverse_array(int arr[],int size)
{
    int i, temp;
    for (i = 0; i < size/2; i++)
    {
        temp = arr[size-1-i];
        arr[size-1-i] = arr[i] ;
        arr[i]= temp;
    }

}
