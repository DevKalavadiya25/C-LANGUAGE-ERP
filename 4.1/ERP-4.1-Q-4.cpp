#include<stdio.h>
int main ()
{
	int x,y,z;
	printf("Enter your first number :");
	scanf("%d",&x);
	
	printf("Enter your second number :");
	scanf("%d",&y);
	
//	printf("first swapp=%d\n");
//	printf("second swapp=%d\n");
	
//	sum=z=x,x=y,y=z;
	z=x;
	x=y;
	y=z;
	
	printf(" swapp=%d\n,%d",x,y);
}