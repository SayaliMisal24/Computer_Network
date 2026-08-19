#include <iostream>
using namespace std;
int main()
{
    int i, j = 0, n, counter = 0;
    cout << "Enter Size of Frame2: ";
    cin >> n;
    int frame2[n], frame1[n];
    cout << "Enter the bits for Frame2: ";
    for (i = 0; i < n; i++)
    {
        cin >> frame2[i];
    }
    for (i = 0; i < n; i++)
    {
        if (frame2[i] == 1)
        {
            counter++;
            frame1[j] = frame2[i];
            j++;
        }
        else
        {
            counter = 0;
            frame1[j] = frame2[i];
            j++;
        }
        if (counter == 5)
        {
            counter = 0;
            i++;
        }
    }
    cout << "Frame2: ";
    for (i = 0; i < n; i++)
    {
        cout << frame2[i];
    }
    cout << "\nFrame1: ";
    for (i = 0; i < j; i++)
    {
        cout << frame1[i];
    }
    return 0;
}
