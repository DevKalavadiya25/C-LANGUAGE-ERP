#include<stdio.h>
int main()
{
	int x,y;
	int sum=1;
	printf("Enter your x velue");
	
  scanf("%d",&x);
  
  printf("Enter your y value");
  scanf("%d",&y);
  
  sum=(x*x+(x+y)+(x+y)+y*y);
  
  printf("(x + y)2 result is :%d",sum);
  
}