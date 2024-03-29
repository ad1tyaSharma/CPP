#include <iostream>
using namespace std;
void normalTraversal()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void spiralTraversal()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // 4 variables
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        // for row_start
        for (int col = col_start; col <= col_end; col++)
        {
            /* code */
            cout << arr[row_start][col] << " ";
        }
        row_start++;
        cout << endl;
        // for col_end
        for (int row = row_start; row <= col_end; row++)
        {
            /* code */
            cout << arr[row][col_end] << " ";
        }
        col_end--;
        cout << endl;

        // for row_end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;
        cout << endl;
        // for col_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
        cout << endl;
    }
}
int main()
{
    // normalTraversal();
    spiralTraversal();
}