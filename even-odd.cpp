#include<stdio.h>
int even_odd(int num){
	if(num%2==0) {
		printf("the number %d is even",num);
		
	}
	else
	printf("the number %d is odd",num);
}
int main()
{
	int num;
	printf("enter a number : ");
	
	scanf("%d",&num);
	even_odd(num);
	
}
