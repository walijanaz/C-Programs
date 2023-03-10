#include <iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"enter number 1" ;
cin>>n1;
cout<<"enter number 2" ;
cin>>n2;
cout<<"enter number 3" ;
cin>>n3;
(n1<n2&&n1<n3)?
 cout<<"it is small number"<<n1 :
(n2<n3&&n2<n1)?
 cout <<"it is small number"<<n2 :
 cout<<"it is small number"<<n3 ;
return 0;
}