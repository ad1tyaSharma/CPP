// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution{
	public:
   	int maximum_Cuts(int n){
   	    return (pow(n,(2))+n+2)/2;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.maximum_Cuts(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends