#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the value of n";
    cin >> n;
    int arr[100];

    cout << "enter the array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum value is" << max << endl;

    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimum value is" << min << endl;

    return 0;
}