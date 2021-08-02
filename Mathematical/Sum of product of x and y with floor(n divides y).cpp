/*

Given a positive integer n. Find the sum of product of x and y such that floor(n/x) = y .
 

Example 1:

Input: n = 5
Output: 21
Explanation: Following are the possible 
pairs of (x, y):
(1, 5), (2, 2), (3, 1), (4, 1), (5, 1).
So, 1*5 + 2*2 + 3*1 + 4*1 + 5*1 
   = 5 + 4 + 3 + 4 + 5 
   = 21.
Example 2:

Input: n = 10
Output: 87
Explanation: Sum of product of all 
possible pairs of (x, y) is 87.
 

Your Task:
You don't need to read or print anything. Your task is to cpmplete the function sumofproduct() which takes n as input parameter and returns the sum of product of all possible pairs(x, y).
 

Expected Time Complexity: O(n)
Expected Space Compelxity: O(1)
 

Constraints:
1 <= n <= 106

Written By Kunwar Yashaswee Chhaunker
*/


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    // Code here
	    int x, y, sum = 0;
	    for(x = 1; x <= n; x++){
	        y = floor(n/x);
	        int pro = x * y;
	        
	        sum = sum + pro;
	    }
	    return sum;
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
		long long int ans = ob.sumofproduct(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
