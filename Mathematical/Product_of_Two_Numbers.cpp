/*Problem
You are given two integers x and y, your task is to return the product of x and y.

Examples :

Input: x = 5, y = 2
Output: 10
Explanation: Product of 5 and 2 is 10.
Input: x = 100, y = 5
Output: 500
Explanation: Product of 100 and 5 is 500.
Constraints:
-104 <= x, y <= 104

Solution:
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int product(int x, int y) {
        // code here
        return x * y;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.product(x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
