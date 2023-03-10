#include<iostream>
using namespace std;
int main()
{
	int age;
	char gender, M_status;
	cout<<"enter age ";
cin>>age;
cout<<"enter gender(f/m)";
cin>>gender;
cout<<"enter M_status(Y/N)";
cin>>M_status;

if(gender=='m')
{
	if(age<=40)
cout<<"you can work anywhere";
    else if(age<=60)
cout<<"you can work urban areas";
}

else if(gender=='f')
{
cout<<"you can work urban areas";
}
else
cout<<"error";
return 0;
}