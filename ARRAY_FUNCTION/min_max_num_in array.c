#include<stdio.h>
void max_min_in_array(int arr[],int size,int result[]);

int main()
{
    int arr[10] = {1,2,3,4,15,1,0,3,4,5};
    int result[2];
     max_min_in_array(arr,10,result);
    printf("max num in array is : %d\n",result[0]);

    printf("min num in array is : %d",result[1]);

    return 0;
}

void max_min_in_array(int arr[],int size,int result[])
{
    int i,max = arr[0],min = arr[0];
    for (i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }
    result[0]= max;
    result[1]= min;

}
