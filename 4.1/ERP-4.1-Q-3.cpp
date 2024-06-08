#include<stdio.h>
int main()
{

	int x,y,sum=1; 
	
	printf("Enter your x value");
	
  scanf("%d",&x);
  
  printf("Enter your y value");
  scanf("%d",&y);
  
  sum=x*x*x+(x+y)+(x+y)+y*y*y;
  
  printf("(x + y)3 result is :%d",sum);
}
//x³+3x²y+3xy²+y³