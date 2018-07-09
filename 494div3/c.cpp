#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[5000];
double b[5001];
int main()
{
   int n,k,i,j;
   cin>>n>>k;
   b[0]=0;
   for(i=1;i<=n;i++)
   {
   	cin>>a[i];
   	b[i]=b[i-1]+a[i];
   }
   //for(i=1;i<=n;i++)
   	//cout<<b[i]<<" ";
   //cout<<endl;
   double max=-1,temp;
   for(i=k;i<=n;i++)
   {
   	for(j=1;j<=n-i+1;j++)
    {
    	temp = ((b[j+i-1]-b[j-1])/i);
    	if(temp>max)
    		max=temp;
    	//cout<<temp<<" ";
    }
   }
   cout<<fixed<<setprecision(20)<<max;
   return 0;
}