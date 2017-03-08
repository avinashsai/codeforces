#include<stdio.h>
int main()
{
	int x,y,a[20],i,j,t,l=1,k=-1;
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<x)
	{
		t=a[i]%10;
		if(k==t)
		{
			printf("NO");
			break;
		}
		else
		{
		l=0;
		while(a[i]>0)
		{
			if(a[i]%10==t)
			{
				l++;
				a[i]=a[i]/10;
			}
			else
			{
				break;
			}
		}
		if(l<y)
		{
			printf("NO");
			break;
		}
		
		else
		{
			if(i==x-1)
			{
				printf("YES");
			}
			else
			{
			k=t;
			i++;
		}
		}
			}

}
return 0;
}
