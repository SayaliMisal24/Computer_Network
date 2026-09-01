#include <iostream>
using namespace std;
int main()
{
    int n, m,i,j,k;
    cout << "Enter the size of frame: ";
    cin >> n;
    int frame[n];
    cout << "Enter the frame: ";
    for ( i = 0; i < n; i++)
    {
        cin >> frame[i];
    }
    cout << "Enter the size of divisor: ";
    cin >> m;
    int divisor[m];
    cout << "Enter the divisor: ";
    for (j = 0; j< m; j++)
    {
        cin >> divisor[j];
    }
    int p = n +(m - 1);
    int message[p]; 
     for (int i = 0; i < n; i++)
        message[i] = frame[i];

    for (int i = n; i < p; i++)
        message[i] = 0;

    for (int i = 0; i < n; i++)
    {
        if (message[i] == 1)
        {
            for (int j = 0; j < m; j++)
                message[i + j] = message[i + j] ^ divisor[j];
        }
    }
    cout << "CRC: ";
    for (int i = n; i < p; i++)
        cout << message[i];
    cout << "\nTransmitted Frame: ";
    for (int i = 0; i < n; i++)
        cout << frame[i];

    for (int i = n; i < p; i++)
        cout << message[i];
    return 0;
}
