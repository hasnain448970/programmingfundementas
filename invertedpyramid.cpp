#include<stdio.h>
int main() {
	int n;
	printf("enter no of rows");
	scanf("%d",&n);
	int c=0;
	for(int i=n;i>=1;i--){
		int k=n-c;
	for(int j=1;j<=2*n-1-c;j++){
	if(j<=n-i)	
	{
	printf(" "); }
	else
	{
		if(j<n) {
		
			printf("%d",k);
			k--; }
		else
		{
			printf("%d",k);
			k++;}
	} }
	printf("\n");
	c++; }
	
}
