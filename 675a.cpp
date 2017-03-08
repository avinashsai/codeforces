#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c;
	 if(a==b)
	cout<<"YES";
	else if(a!=b&&c==0)
	cout<<"NO";
else if(a<0&&c<0&&b>=0)
cout<<"NO";
else if(a>=0&&c>=0&&b<0)
cout<<"NO";
else if(a<0&&c>0&&a+c>b)
cout<<"NO";
else if(a>0&&c<0&&a+c<=0&&b>0)
cout<<"NO";
else if(a<=0&&b<0&&c<0&&a+c<b)
cout<<"NO";
else if(a==0&&b>0&&c<0)
cout<<"NO";
else if(a>0&&c>0&&a>b)
cout<<"NO";
	else 
	{
if((b-a)%c==0)
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}
