#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max,p;
	cin>>a>>b>>c;
	max=a+(b*c);
	p=(a+b)*c;
	if(p>max)
	max=p;
	p=a*b*c;
	if(p>max)
	max=p;
	p=a*(b+c);
	if(p>max)
	max=p;
	p=a*b+c;
	if(p>max)
	max=p;
	p=a+b+c;
	if(p>max)
	max=p;
	cout<<max;
	return 0;
}
