#include<stdio.h>
main(){
	float weight,height,BMI;
	printf("enter your weight in kilograms : ");
	scanf("%f",&weight);
	printf("enter your  height in inches : ");
    scanf("%f",&height);
    
    BMI = (weight*2.2*703)/(height*height);
    
    printf("your Body amss index is %f \n\n",BMI);
    
   
    	printf("BMI<18.5:               underweighte\n");
    	printf("BMI>18.5 && BMI<24.9:   normal\n");
    	printf("BMI>25 && BMI<29.9:     overweighte\n");
    	printf("BMI>=30                 Obese\n");
    
}
