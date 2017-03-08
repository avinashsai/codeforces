#include<stdio.h>
int main()
{
	int n,m,a,count=0;
	scanf("%d %d %d",&n,&m,&a);
	if((n*m)%(a*a)==0)
	{
		printf("%d",(n*m)/(a*a));
	}
	else
	{
		if(n*m<=a*a)
		printf("1");
		else
		if(n*m/2==a*a)
		{
			printf("2");
		}
		else
		{
			if(n*m/4<a*a&&n*m>a)
			{
				printf("4");
			}
			else
			{
				if(n*m/2>a*a)
				{
					while(n>0)
					{
						n=n-a;
						count++;
					}
					printf("%d",count);
				}
				else
				{
					if(n*m<=a)
					printf("1");
				}
			}
		}
	}
	return 0;
}
