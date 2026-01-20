#include<stdio.h>
int LCM(int num1,int num2)
{
    int max,lcm;
    if(num1 == num2)return num1;
    if(num1 < 0)num1 = -num1;
    if(num2 < 0)num2 = -num2;
    if(num1 == 0 || num2 == 0)return 0;
    max = (num1 > num2) ? num1 : num2;
    while(1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    return lcm;
}

int main()
{
    printf("Enter two nos : ");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int lcm = LCM(num1,num2);
    printf("LCM of %d & %d is : %d",num1,num2,lcm);
    return 0;
}
