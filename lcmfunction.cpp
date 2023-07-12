#include<stdio.h>
int LCM(int n1,int n2,int greater);
int main(){
	int num1,num2,larger;
	
	printf("enter two number find LCM ");
	scanf("%d%d",&num1,&num2);
	num1>num2?larger=num1:larger=num2;
    int result = LCM(num1,num2,larger);
	printf("The LCM is %d ",result);	 
}
 int LCM(int n1,int n2,int greater){
 	 int lcm;
 	 int add = greater ;
 	 while(1){
 	 	
 	  if((greater%n1==0)&&(greater%n2==0))
	   {
 	  
	   	lcm  = greater;
	    break;	
 	 	
	   }	
	    greater =add + greater ;
	  }
	  return lcm; 
 }
