#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter your first number :");
	scanf("%d",&x);
	
	printf("Enter your second number :");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	
	printf("swapp=%d\n,%d",x,y);
}