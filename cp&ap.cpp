#include<iostream>
using namespace std;

int main()
{
	int cp,sp;
	cout<<"Enter the cost price and selling price :"<<endl;
	cin>>cp>>sp;
	
	if(cp<sp)
	cout<<sp-cp<<" is loss.";
	
    else if(sp>cp)
	cout<<sp-cp<<" is profit.";
	
	else
	cout<<"No profit and no loss.";
	
	return 0;
}
