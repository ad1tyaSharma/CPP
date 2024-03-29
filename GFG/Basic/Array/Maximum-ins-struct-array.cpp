// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height
{
    int feet;
    int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tmp1, tmp2;
        cin >> n;
        Height arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> tmp1 >> tmp2;
            arr[i] = {tmp1, tmp2};
        }
        int res = findMax(arr, n);
        cout << res << endl;
    }
    return 0;
} // } Driver Code Ends

/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int max, b[n];
    for (int i = 0; i < n; i++)
    {
        int tmp = arr[i].feet * 12 + arr[i].inches;
        b[i] = tmp;
    }
    sort(b, b + n);
    return b[(n - 1)];
    // Code here
}