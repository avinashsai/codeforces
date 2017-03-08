#include<iostream>
using namespace std;
int main()
{
	int a1,b1,c1,a2,b2,c2;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2;
	if(a1==a2&&b1==b2&&c1==c2)
	cout<<"-1";
	else if(c1==0&&c2!=0||c1!=0&&c2==0&&a1*b2==b1*a2)
	cout<<"0";
	else if(a1*b2==b1*a2&&c1>0&&c2>0)
	cout<<"0"<<"\n";
	else if(c1==0&&c2==0&&a1*b2==b1*a2)
	cout<<"-1";
	else
	cout<<"1";
	return 0;
}
