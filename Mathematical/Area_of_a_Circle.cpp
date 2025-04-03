/*Problem:

Given the radius of circle r. The task is to find the area of circle.

Examples:

Input: r = 5
Output: 78.53982
Explanation: As area = π * r * r = π * 5 * 5 = 78.53982
Input: r = 2
Output: 12.56637
Explanation: As area = π * r * r = π * 2 * 2 = 12.56637
Constraints:

0 <= r <= 105

Solution:
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    double calculateArea(double r) {
        // code here
        double area;
        area = M_PI * r * r;
        return area;
    }
};


//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double number;
        cin >> number;

        Solution ob;
        double ans = ob.calculateArea(number);
        cout << ans << endl;
        // cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
