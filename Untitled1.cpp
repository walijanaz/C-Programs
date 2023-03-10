#include<iostream>
using namespace std;
int main()
{
	float w_bill,g_bill,e_bill,e_unit,g_unit,w_unit;
	cout<<" enter your water consumption unit";
	cin>>w_unit;
	cout<<"enter your electricity consumption unit ";
	cin>>e_unit;
	cout<<"enter your gas consumption unit";
	cin>>g_unit;
	
	if(w_unit<=500)
	w_bill=2000;
	else
	w_bill=3000;
	cout<<"water bill"<<w_bill;
	
	if(g_unit<=300)
	g_bill=3500;
	else
	g_bill=5000;
	cout<<"gas bill"<<g_bill;
	
	if(e_unit<=50)
	e_unit=e_unit*0.50;
	
	return 0;
	}