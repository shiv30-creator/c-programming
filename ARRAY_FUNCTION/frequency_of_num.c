#include<stdio.h>

int frequency_of_num_in_array(int arr[],int size,int num);
int main()
{
    int arr[10] = {1,2,3,4,5,1,2,3,4,5};
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int count = frequency_of_num_in_array(arr,10,num);

    if(count == 0)
        printf("%d is not appears in array",num);
    else
        printf("%d appears %d times in array ",num,count);

    return 0;
}
int frequency_of_num_in_array(int arr[],int size,int num)
{
    int i,count = 0;

    for(i = 0; i < size; i++)
    {
        if( arr[i] == num)
        {
            count++;
        }
    }
    return count;
}
