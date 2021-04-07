#include<iostream>
using namespace std;

int x=12;
int main()
{
	int x=11;
	{
		int x=10;
		cout<<x<<endl;
	}
	cout<<x<<endl;
	cout<<::x<<endl;
}
