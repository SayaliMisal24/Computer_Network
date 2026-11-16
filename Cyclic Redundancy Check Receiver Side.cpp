#include <iostream>
using namespace std;
int main()
{
    int p, m,i,j,k;
    cout << "Enter the size of message: ";
    cin >> p;
    int message[p];
    cout << "Enter the message: ";
    for ( i = 0; i < p; i++)
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
    int n=p-(m-1);
    for (i = 0; i < n; i++)
    {
        if (message[i] == 1)
        {
            for (j = 0; j < m; j++)
			{
                message[i + j] = message[i + j] ^ divisor[j];
			}
		}
    }
    
    int count=0;
    for (i = n; i < p; i++)
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
