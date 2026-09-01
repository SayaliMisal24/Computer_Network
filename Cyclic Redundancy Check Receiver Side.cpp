#include <iostream>
using namespace std;
int main()
{
    int n, m,i,j,k;
    cout << "Enter the size of message: ";
    cin >> n;
    int message[n];
    cout << "Enter the message: ";
    for ( i = 0; i < n; i++)
    {
        cin >> message[i];
    }
    cout << "Enter the size of divisor: ";
    cin >> m;
    int divisor[m];
    cout << "Enter the divisor: ";
    for (j = 0; j< m; j++)
    {
        cin >> divisor[j];
    }
    for (int i = 0; i < n; i++)
    {
        if (message[i] == 1)
        {
            for (int j = 0; j < m; j++)
                message[i + j] = message[i + j] ^ divisor[j];
        }
    }
    int p=n-(m-1);
    int count=0;
    for (int i = p; i < n; i++)
    {
        if(message[i]==1){
        	count=count+1;
		}
    }
    if(count>0){
    	cout<<"Error present in the message";
	}
    else{
      cout<<"Error not present in the message";
	}
    
    return 0;
}
