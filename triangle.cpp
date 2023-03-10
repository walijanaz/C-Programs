#include<iostream>
using namespace std;
int main()
{
int t1,t2,t3,t;
cout<<"enter  angle1" ;
cin >>t1;
cout<<"enter angle2" ;
cin>>t2;
cout<<"enter asngle3" ;
cin>>t3;
t=t1+t2+t3;
if(t==180&&t1>0&&t2>0&&t3>0)
{
cout<<"it is triangle";
}
else 
{
cout<<"it is not triangle";
}
return 0;
}