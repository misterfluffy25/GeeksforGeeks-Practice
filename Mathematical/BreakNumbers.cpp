/*
Question - 
Given a large number N, write a program to count the ways to break it into three whole numbers such that they sum up to the original number.

Example 1:

Input: N = 3
Output: 10
Explaination: The ways are 
0 + 0 + 3 = 3
0 + 3 + 0 = 3
3 + 0 + 0 = 3
0 + 1 + 2 = 3
0 + 2 + 1 = 3
1 + 0 + 2 = 3
1 + 2 + 0 = 3
2 + 0 + 1 = 3
2 + 1 + 0 = 3
1 + 1 + 1 = 3
Example 2:

Input: N = 1
Output: 3
Explaination: The ways are:
1 + 0 + 0 = 1
0 + 1 + 0 = 1
0 + 0 + 1 = 1
Your Task:
You do not need to read input or print anything. Your task is to complete the function countWays() which takes N as input parameter and returns the total number of possible ways to break N in three whole numbers.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 109  
Answer - 
*/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long countWays(long long N){
        // code here
        long long result = ((N + 2) * (N + 1)) / 2;
        return result;
    }
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countWays(N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
