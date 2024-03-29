#include <bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes()
{
    int n;
    cin >> n;
    // I'll mark the multiples of the number in the range if unmarked
   // bool prime[n];
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
// Function to display the array
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
  
// Function to find the permutations
void findPermutations(int a[], int n)
{
  
    // Sort the given array
    sort(a, a + n);
  
    // Find all possible permutations
    cout << "Possible permutations are:\n";
    do {
        display(a, n);
    } while (next_permutation(a, a + n));
}
  
int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a=b;
        b =rem;

    }
    return a;
}
 void eucAlgo()
 {
     int a,b;
     cin>>a>>b;
cout<<gcd(a,b);
 }
int main()
{
    //sieveOfEratosthenes();
    int arr[] = {1,2,3,4};
    findPermutations(arr,4);
}