#include<stdio.h>
int HCF(int num1, int num2);
int LCM(int num1,int num2);

 int main()
 {
     printf("Enter 4  numbers : ");
     int num1,num2,num3,num4;
     scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
     int hcf,hcf12,hcf34;
     hcf12 = HCF(num1,num2);                                 //Calculate hcf for no1 and no2 
     hcf34 = HCF(num3,num4);                                 //Calculate hcf for no3 and no4 
     hcf = HCF(hcf12,hcf34);
     printf(" HCF : %d\n",hcf);                              //HCF(hcf(no1,no2),hcf(no3,no4))
     int lcm,lcm12,lcm34;
     lcm12 = LCM(num1,num2);                                //Calculate lcm for no1 and no2 
     lcm34 = LCM(num3,num4);                                //Calculate lcm for no3 and no4 
     lcm = LCM(lcm12,lcm34);
     printf(" LCM : %d\n",lcm);                             //LCM(lcm(no1,no2),lcm(no3,no4))

     return 0;
 }

 int HCF(int num1, int num2)
 {
     if(num1 == 0 || num2 == 0 )return 0;                     //if any no is zero, hcf will be zero
     if(num1 < 0)num1 = -num1;                                //negative numbers converted to positive integers
     if(num2 < 0)num2 = -num2;                                //negative numbers converted to positive integers

     int limit,hcf=1;                                         //min hcf is 1 for any number greater than zero
     limit = ((num1 < num2) ? num1 : num2)                    //compare two nos and smaller no. will be the limit for checking factor                                                      
                                                                  
     int count;
     for(count = limit; count >= 1; count--)                  //checking factors within the limit of 1 to smaller no.                              
     {
         if(num1 % count == 0 && num2 % count == 0)          //checking integer which divides both the integers simultaneously 
         {
             hcf = count;                                    //once highest factor found store as hcf
             break;                                          //once highest factor found break the loop to avoid unnecessary iterations
         }
     }
       return hcf;                                           // send hcf value back to main fun
 }

 int LCM(int num1,int num2)
 {
     int lcm,hcf;
     hcf = HCF(num1,num2);                                 // hcf required to calculate lcm 
     if(hcf == 0)return 0;                                 //if hcf found zero , return zero value to main fun
     lcm = (num1 * num2)/hcf;                             //lcm formula lcm = (num1*num2)/hcf   
     return lcm;                                          // final value of lcm send to main function
 }
