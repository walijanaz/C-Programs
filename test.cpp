#include <iostream>
using namespace std;
int main()
{
	int a;
	cout <<"enter a number" ;
	cin>>a;
	
switch (a>0){

case 0:
	{
	cout<<"it is positive" ;
    break;
	}
    
case 1:
	{
	cout<<"it is negative" ;
	break;
}
		
default:
{
		cout<<"it is neutral" ;
	}
	return 0;	
	}}