#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter the First octet: ";
	cin>>a;
	cout<<"Enter the Second octet: ";
	cin>>b;
	cout<<"Enter the Third octet: ";  
	cin>>c;
	cout<<"Enter the Fourth octet: ";
	cin>>d;
	if(a<0 || a>255 || b<0 || b>255 || c<0 || c>255 || d<0 || d>255){
		cout<<"Invalid address";
	}
	if(0<=a && a<=127){ 
		cout<<"\nAddress is present in class A"<<endl;
		cout<<"Network Mask: 255.0.0.0"<<endl;
		cout<<"Number of addresses: 16777216"<<endl;
		cout<<"First address: "<<a<<".0.0.0"<<endl;
		cout<<"Last address: "<<a<<".255.255.255"<<endl;
	}
	else if(128<=a && a<=191){
		cout<<"\nAddress is present in class B"<<endl;
		cout<<"Network Mask: 255.255.0.0"<<endl;
		cout<<"Number of addresses: 65536"<<endl;
		cout<<"First address: "<<a<<"."<<b<<".0.0"<<endl;
		cout<<"Last address: "<<a<<"."<<b<<".255.255"<<endl;
	}
	else if(192<=a && a<=223){
		cout<<"\nAddress is present in class C"<<endl;
		cout<<"Network Mask: 255.255.255.0"<<endl;
		cout<<"Number of addresses: 256"<<endl;
		cout<<"First address: "<<a<<"."<<b<<"."<<c<<".0"<<endl;
		cout<<"Last address: "<<a<<"."<<b<<"."<<c<<".255"<<endl;
	}
	else if(224<=a && a<=239){
		cout<<"\nAddress is present in class D"<<endl;
	}
	else if(240<=a && a<=255){
		cout<<"\nAddress is present in class E"<<endl;
	}
	return 0;
}
