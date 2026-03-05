#include<stdio.h>

void merge_array(int arr1[],int size1,
                 int arr2[],int size2,
                 int merge[]);
                 
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};
    int merge[10],i;
    merge_array(arr1,5,arr2,5,merge);
    for(i = 0; i < 10; i++)
    {
          printf("%d ",merge[i]);
    }

    return 0;
}
void merge_array(int arr1[],int size1,
                 int arr2[],int size2,
                 int merge[])
{
    int i,j = 0;
    for(i = 0; i < size1; i++)
    {
        merge[j] = arr1[i];
        j++;
    }
    for(i = 0; i < size2; i++)
    {
        merge[j] = arr2[i];
        j++;
    }
}
