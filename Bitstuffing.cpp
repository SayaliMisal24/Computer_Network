#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, n, counter = 0;
    cout << "Enter Size of Frame1: ";
    cin >> n;
    int frame1[n], frame2[n + 1];
    cout << "Enter the bits for frame1: ";
    for (i = 0; i < n; i++)
    {
        cin >> frame1[i];
    }
    for (i = 0; i < n; i++)
    {
        if (frame1[i] == 1)
        {
            counter++;
            frame2[j] = frame1[i];
            j++;
        }
        else
        {
            counter = 0;
            frame2[j] = frame1[i];
            j++;
        }
        if (counter == 5)
        {
            counter = 0;
            frame2[j] = 0;
            j++;
        }
    }

    cout << "Frame1: ";
    for (i = 0; i < n; i++)
    {
        cout << frame1[i];
    }
    cout << "\nFrame2: ";
    for (i = 0; i < j; i++)
    {
        cout << frame2[i];
    }
    return 0;
}
