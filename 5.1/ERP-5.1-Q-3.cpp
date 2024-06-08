#include<stdio.h>
int main()
{


float maths,english,science,average;

printf("Enter the maths marks:\n");
scanf("%f",&maths);

printf("Enter the English marks:\n");
scanf("%f",&english);

printf("Enter the science marks:\n");
scanf("%f",&science);

average=(maths + english + science)/ 3;

printf("avarage mark:%.2f\n",average);

}