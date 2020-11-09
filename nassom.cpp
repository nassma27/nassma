#include<iostream>
#include<string>
using namespace std;
main()
{
	string n,d,A,T; 
	int un,g; 
	cout<<"Your Name: ";
	cin>>n; in string n*/
	cout<<"Your University Number: ";
	cin>>un; /*storing the University Number in integer un*/
	cout<<"Choose Your Department (T or A): "; /*you should limit your input between capital A and capital T*/
	cin>>d; /*storing the Department in strings A and T*/
	cout<<"Your Grade";
	cin>>g; /*storing the Grade in integer g*/
 	cout<<endl; /*ending line to start program outputs*/
 	cout<<"Name: "<<n<<endl;
 	cout<<"University Number: "<<un<<endl;
 	cout<<"Department: ";
 	if (d=="A")
	cout<<"Control"<<endl; /*entering the string A will output Control*/
	else if (d=="T")
	cout<<"Communication"<<endl;/*entering the string T will output Control*/
 	cout<<"Grade: ";
 	/*using if condition to select the right grade*/
 	if ((g<=100)&&(g>89))
	cout<<"A"; /*entering numbers between 100 and 90 will output A*/
 	else if ((g<90)&&(g>79))
	cout<<"B"; /*entering numbers between 89 and 80 will output B*/
 	else if ((g<80)&&(g>69))
	cout<<"C"; /*entering numbers between 79 and 70 will output C*/
 	else if ((g<70)&&(g>69))
	cout<<"D"; /*entering numbers between 69 and 60 will output D*/
 	else if ((g<60)&&(g>49))
	cout<<"F"; /*entering numbers between 59 and 50 will output F*/
	else cout<<"Error"; /*entering numbers out of the range will output Error*/
	return 0;} /*program end*/