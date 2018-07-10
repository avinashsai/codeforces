#include<bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000];
int main()
{
int i,n,c=1,j=1;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
i=0;
while(i<n)
{
	if(a[i]==1)
		break;
	i++;
}
i++;
while(i<n)
{
   if(a[i]==1)
   {
   	b[j]=c;
   	j++;
   	c=1;
   }
   else
   	c++;
   i++;
}
b[j]=c;
cout<<j<<endl;
for(i=1;i<=j;i++)
	cout<<b[i]<<" ";
return 0;
}