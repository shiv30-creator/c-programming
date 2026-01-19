#include <stdio.h>
int disp_2digit_odd_sum_MSB(void);
#define MSB 7

int main()
{
    int sum;
    sum = disp_2digit_odd_sum_MSB();
    printf("sum of 2 digit odd nos whose msb is 7 = %d\n",sum);
    return 0;

}

int disp_2digit_odd_sum_MSB(void)
{
    int num,sum=0;
    for(num = 10; num <= 99; num++)
    {

        if(num%2 != 0 && num/10 == MSB)
        {
            sum += num;
        }
    }
    return sum;
}
