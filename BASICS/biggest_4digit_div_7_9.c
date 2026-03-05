#include<stdio.h>
int biggest_4digit_div_7_9(void)
{
    int num;
    for(num = 9999; num >= 1000; num--)
    {
        if(num % 7 == 0 && num % 9 == 0)
        {
             return num;
             break;
        }
    }
    return 1;
}

int main()
{
    int biggest_num = biggest_4digit_div_7_9();
    if(biggest_num == 1)
    printf("no such number exists");
    else 
    printf("biggest 4 digit no is : %d",biggest_num);

    return 0;
}
