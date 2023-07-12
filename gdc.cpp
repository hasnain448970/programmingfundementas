#include<stdio.h>
main(){
	
	int  num1,num2,limit,gdc=0;
	printf("enter the two numbers and also limit of loop\n");
	scanf("%d %d %d",&num1,&num2,&limit);
    for(int i=1; i<=limit;i++){
       	if(num1%i==0 && num2%i==0){
       		
       		printf("%d\n",i);
       		gdc=i;
		   }
    
	}
            printf("GDC = %d",gdc);
}
