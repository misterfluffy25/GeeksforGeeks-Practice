Problem Link:

Problem: Given an integer n, your task is to compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

Examples:
  Input: n = 1
  Output: 1
  Explanation: For n = 1, the sum will be 1.
               Input: n = 5
               Output: 15
  Explanation: For n = 5, sum will be 15. 1 + 2 + 3 + 4 + 5 = 15.
  Constraints:
    1 <= n <= 104

Solution:
  /{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int seriesSum(int n) {
        int sum = 0;
        if(n == 0) {
            return 0;
            }
        else {
            int i = 0;
            for(i = i + 1; i <=n; i++) {
                sum += i; 
            }
            return sum;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.seriesSum(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends

Explanation: 
1. Took a sum variable, initialised with 0 to save the value of summed up natural number.
2. Considered two probable cases, ran a if statement. 
3. Considered an edge case, as natural numbers starts with 1, when n = 0, then it will return the sum as 0.
4. In the else statement, to calculate the sum of the natural numbers from 1 to n, a for loop with the counter as i++, condition as i <= n.
5. In the loop snippet, a simple sum statement is written to calcuate the sum, and later returned the sum.
