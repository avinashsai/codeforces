#include<stdio.h>
int main()
{
   long long int a,b,s=0;
   int k;
	scanf("%d %d %d",&k,&a,&b);
	if(k==1)
	{
		printf("%d",2*b+1);
	}
	else
	{
	while(a<=b)
	{
		if(a%k==0)
		s++;
		a++;
	}
	printf("%lld",s);
}
	return 0;
}
