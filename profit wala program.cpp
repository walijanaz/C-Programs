#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;

if(a>b)
{
c=a-b;
cout<<"profit",c;
}
 if(a<b)
{
c=b-a;
cout<<"loss"<<c;
}
else
{
cout<<"no profit no loss";
}
return 0;
}