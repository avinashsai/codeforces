#include<iostream>
#include<math.h>
#include<stdio.h>
int main()
{
	 float a,b,c,d;
	float x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d<0)
	printf("0\n");
	else if(d==0)
	{
	printf("1\n");
	x1=(-b)/2*a;
	printf("%f\n",x1);}
	else
	{
		printf("2\n");
		x1=(-b+d)/2*a;
		x2=(-b-d)/2*a;
		printf("%f\n",x1);
		printf("%f\n",x2);
	}
	return 0;
}
