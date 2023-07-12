#include<stdio.h>
#include<headerfile.h>//name of file in which you write the below code
int fact(int n)
{
	int f=1;
	for(int i=n;i>1;i-- )
	{
		f=f*i;
	}
	return f;
}
//now you can call the fact function in your existing language fle
