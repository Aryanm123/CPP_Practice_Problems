#include<iostream>
using namespace std;

int main()
{
	int cp,sp;
	cout<<"Enter the Cost Price and Selling Price :"<<endl;
	cin>>cp>>sp;
	
	if(sp>cp)
	cout<<sp-cp<<" is profit.";
	else if(cp>sp)
	cout<<cp-sp<<" is loss.";
	else
	cout<<"No profit and no loss.";
	
	return 0;
}
