#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[3][3];
    b[0][0] = a[0][1] + a[0][0] + a[1][0];
    b[0][1] = a[0][1] + a[0][0] + a[0][2] + a[1][1];
    b[0][2] = a[0][2] + a[0][1] + a[1][2];
    b[1][0] = a[1][0] + a[0][0] + a[2][0] + a[1][1];
    b[1][1] = a[1][1] + a[1][0] + a[1][2] + a[0][1] + a[2][1];
    b[1][2] = a[1][2] + a[0][2] + a[1][1] + a[2][2];
    b[2][0] = a[2][0] + a[1][0] + a[2][1];
    b[2][1] = a[2][1] + a[1][1] + a[2][0] + a[2][2];
    b[2][2] = a[2][2] + a[1][2] + a[2][1];
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b[i][j] % 2 == 1)
                c[i][j] = 0;
            else
                c[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j];
        }
        cout << "\n";
    }
}