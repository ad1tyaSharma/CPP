#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int arr[10];
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
        sort(arr, arr + 10);
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] == arr[i + 4])
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
}