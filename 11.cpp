#include <iostream>
using namespace std;
int squareroot(long int n)
{
	long int l=1,h=n;
	while(l<=h)
	{
		long int m=(l+h)/2;
		if(m*m==n)
		return m;
		else if(m*m>n)
		h=m-1;
		else
		l=m+1;
	}
	return h;
}
int main()
{
   long int n,c=0,no,k;
   cin>>no;
   while(no--)
   {
   cin>>n;
   c=0;
   while(n)
  {
  	k=squareroot(n);
  	c++;
  	n=n-k*k;
  	
  }
  cout<<c<<"\n";
   }
    return 0;
}
