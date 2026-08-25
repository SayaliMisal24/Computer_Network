#include<iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main()
{
	int n,timeout=5,i;
	int delay;
	int frame[n];
	int time;
	srand(time=0);
	cout<<"Enter No. of Frames:";
	cin>>n;
	for (i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Frame ";
		cin>>frame[i];
		delay=rand()%10;
		if(timeout<delay){
			cout<<"Acknowledgment of Frame "<<i+1<<" received"<<endl;
		}
		else{
			cout<<"Waiting"<<endl;
		}
		delay=rand()%10;
	}
	return 0;
}
