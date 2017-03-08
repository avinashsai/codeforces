#include<stdio.h>
int main()
{
    long int pro=1,i=0,s=1;
	int n,no;
	scanf("%d",&n);
	while(i!=n)
	{
		scanf("%d",&no);
		pro=pro*no;
		i++;
	}
	for(i=1;i<=pro;i++)
	{
		if(pro%i==0)
		{
			s=s*i;
		}
	}
	printf("%ld",s);
	return 0;
}
