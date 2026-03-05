#include<stdio.h>
void seperate_even_odd(int arr[],int size,
                       int result[],int even[],
                       int odd[]);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, result[2], even[5],odd[5];;
    seperate_even_odd(arr,10,result,even,odd);
    printf("even numbers : ");
    for(i = 0; i < result[0]; i++)
    {
        printf(" %d ",even[i]);
    }
    printf("\n");
    printf("odd numbers : ");
        for(i = 0; i < result[1]; i++)
    {
        printf(" %d ",odd[i]);
    }

    return 0;
}

void seperate_even_odd(int arr[],int size,
                       int result[],int even[],
                       int odd[])
{
    int i,j = 0,k = 0,count = 0,count1 = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
           {
            even[j] = arr[i];
            j++;count++;
           }
             else
                {
                odd[k] = arr[i];
                k++;count1++;
                }
    }
    result[0] = count;
    result[1] = count1;
}
