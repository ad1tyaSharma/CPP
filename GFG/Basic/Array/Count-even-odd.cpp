// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// Function Prototype
void countOddEven(int[], int);

// } Driver Code Ends

//User function Template for C++

/*Function to count even and odd elements in the array
* arr : Array with its elements
* sizeof_array : number of array elements
* countOdd : variable to count number of odd elements
* countEven : variable to count number of even elements
*/
void countOddEven(int arr[], int n)
{

    // your code here
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << odd << " " << even << endl;
}

// { Driver Code Starts.

// Driver code to test countOddEven function
int main()
{

    // Testcase input
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int sizeof_array;
        cin >> sizeof_array;

        int arr[sizeof_array];

        // Array elements input
        for (int i = 0; i < sizeof_array; i++)
        {
            cin >> arr[i];
        }

        // Calling function to count even and odd
        countOddEven(arr, sizeof_array);
    }

    return 0;
} // } Driver Code Ends