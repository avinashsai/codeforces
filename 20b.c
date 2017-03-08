
#include<math.h>
#include<stdio.h>
int main()
{
	 float a,b,c,d;
	float x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	if(a==0&&b==0&&c==0)
	printf("-1\n");
	else if(a==0&&b==0&&c!=0)
	printf("0\n");
	else if(a==0)
	{
	printf("1\n");
	x1=(-c/b);
	printf("%f\n",x1);}
	else
	{
	d=(b*b-4*a*c);
	if(d<0)
	printf("0\n");
	else if(d==0)
	{
	printf("1\n");
	x1=(-b)/2*a;
	printf("%f0000\n",x1);}
	else
	{
		printf("2\n");
		x1=(-b+d)/2*a;
		x2=(-b-d)/2*a;
		if(x1<x2)
		{
		printf("%f0000\n",x1);
		printf("%f0000\n",x2);}
		else{
		printf("%f0000\n",x2);
		printf("%f0000\n",x1);}
	}
}
	return 0;
}
