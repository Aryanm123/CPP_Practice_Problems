#include<iostream>
using namespace std;

int main()
{
	int a,b,max;
	cout<<"Enter two number :"<<endl;
	cin>>a>>b;
	
	if(a>b)
	max = a;
	else 
	max = b;
	
	cout<<max<<" is larger.";
	
	return 0;
 } 
