/*You are given an integer N. You need to convert all zeroes of N to 5.

Example 1:

Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".
Example 2:

Input:
N = 121
Output: 121
Explanation: Since there are no zeroes in
"121", the number remains as "121".
Your Task:
Your task is to complete the function convertFive() which takes an integer N as an argument and replaces all zeros in the number N with 5. Your function should return the converted number.

Expected Time Complexity: O(K) where K is the number of digits in N
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 10000*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int i=0;
    int ans=n;
    if(n == 0){
        return 5;
    }
    while(n)
    {
        int temp = n%10;
        if(temp==0)
        {
            ans = (ans + (5*pow(10,i)));
        }
        i++;
        n=n/10;
    }
    return ans;

    }