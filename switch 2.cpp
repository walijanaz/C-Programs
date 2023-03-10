#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter character" ;
cin>>ch;
switch (ch)
case 'A':
case 'a':
	cout<<"it is vowel";
	break;
case 'E':
case 'e':
		cout<<"it is vowel";
		break;
    case 'I':
	case 'i':
				cout<<"it is vowel";
				break;
		case 'O':
		case 'o':
						cout <<"it is vowel";
						break;
				case 'U':
				case 'u':
					cout<<"it is vowel";
					break;
								default ;
								cout <<"it is consonant";
								return 0;
							}
