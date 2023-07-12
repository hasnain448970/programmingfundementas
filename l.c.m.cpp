#include<stdio.h>
int main()
{
	int num1,num2,lcm,greater,smaller;
	
	printf("enter first number : ");
	scanf("%d",&num1);
	printf("enter second  number : ");
	scanf("%d",&num2);
	num1>num2?greater=num1:greater=num2;
	while(1){
		if(greater%num1==0 &&greater%num2==0) {
			lcm=greater;
		
break;}
greater++;

	}
	printf("the l.cm of %d nd %d is %d",num1,num2,lcm);
}
