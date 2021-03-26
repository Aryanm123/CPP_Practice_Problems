#include<iostream>
using namespace std;

int main()
{
	int a,b,c,max = 0;
	cout<<"Enter the value of a, b and c:"<<endl;
	cin>>a>>b>>c;
	
	if(a>=b)
	{
		if(a>=c)
		max = a;
		else 
		max = b;
	}
	else
	{
		if(b>c)
		max = b;
		else 
		max = c;
	}
	cout<<max<<" is largest.";
	return 0;
}
