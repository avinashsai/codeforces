#include<iostream>
using namespace std;
int main()
{
	int a[3],i,j,max=-100,min=1001;
	for(i=1;i<=3;i++)
	{
	cin>>a[i];
    if(a[i]<min)
    min=a[i];
    if(a[i]>max)
    max=a[i];
}
	cout<<max-min;
	return 0;
}
