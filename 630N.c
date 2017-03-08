#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	d=sqrt((b*b-4*a*c));
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	if(x1>x2)
	{
	printf("%f0000\n",x1);
	printf("%f0000",x2);
}
	else
	{
		printf("%f0000\n",x2);
	printf("%f0000",x1);
	}
	return 0;
}
