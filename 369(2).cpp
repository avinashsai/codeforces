#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a[500][500],i,j,sum=0,n,row,col;
	int flag=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{
	cin>>a[i][j];
	if(a[i][j]==0)
	{
	col=j;row=i;}
}
}
long long int colsum=0,rowsum=0;
for(i=1;i<=n;i++)
colsum+=a[i][col];
for(j=1;j<=n;j++)
rowsum+=a[row][j];
if(colsum!=rowsum)
cout<<"-1";
else
{
	if(row<=n-1)
	{
		for(j=1;j<=n;j++)
		sum=sum+a[row+1][j];
	}
	else if(row==n)
	{
		for(j=1;j<=n;j++)
		sum=sum+a[row-1][j];
	}
	cout<<sum-rowsum;
}
return 0;
}
