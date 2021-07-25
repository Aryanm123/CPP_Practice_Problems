#include<iostream>
using namespace std;

int main()
{
	int a,b,c,smax,max;
	cout<<"Enter the three number:"<<endl;
	cin>>a>>b>>c;
	
	if(a>b)
	{
		max=a;
		smax=b;
	}
	else
	{
		max=b;
		smax=a;
	}
	if(c>max)
	{
		smax=max;
		max=c;
	}
	else if(c>smax)
	{
		smax=c;
	}
	
	cout<<smax<<" is second maximum.";
	
	return 0;
}
