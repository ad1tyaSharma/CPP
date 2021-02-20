// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> snakePattern(vector<vector<int>> matrix)
    {
        // code here
        int n = matrix.size();
        // cout << n << endl;
        vector<int>
            vec;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    /* code */
                    vec.push_back(matrix[i][j]);
                    //cout <<;
                }
            }
            else
            {

                for (int j = n - 1; j >= 0; j--)
                {
                    /* code */
                    vec.push_back(matrix[i][j]);
                    // cout << ;
                }
            }
            //cout << endl;
        }
        return vec;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends