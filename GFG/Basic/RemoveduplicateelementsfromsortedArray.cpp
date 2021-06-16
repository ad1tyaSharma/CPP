// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        // code here
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        int j = 0;
        for (auto i = s.begin(); i != s.end(); i++)
        {
            a[j] = *i;
            j++;
        }
        return s.size();
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends