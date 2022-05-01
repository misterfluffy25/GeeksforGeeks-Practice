/*
Question - 
Geek and Nerd are strikers playing football with their friend the Goalie. Their energies are denoted by X,Y and Z respectively. 
Strikers can only score a goal if the Goalie's energy is a factor of their energy. For every goal scored the energy of the respective player is decreased by 1. Each save decreses the Goalie's energy by 1. The game ends when the Goalie's energy is reduced to 1. The strikers can try to goal repeatedly in any order in order to optimise the total number of goals. Geek takes the lead whenever in doubt. 
Find the number of goals made by Geek and Nerd. 


Example 1:

Input: 
X = 4, Y = 9, Z = 5

Output: 3 2

Explaination:
1st Kick: X=4, Y=9, Z=4
Z is not a factor of X or Y. So the Goalie 
will save the first kick and his energy will 
reduce by 1. 

2nd Kick: X=3, Y=9, Z=4
Z is a factor of X. So Geek will take the 
goal and reduce X by 1. 

3rd Kick: X=3, Y=9, Z=3. Goalie saves. 

4th Kick: X=2, Y=9, Z=3. 
Z is a factor of both X and Y. 
When in doubt, Geek takes the lead. 

5th Kick: X=2, Y=8, Z=3. Nerd goals.
6th Kick: X=2, Y=8, Z=2. Goalie saves.
7th Kick: X=1, Y=8, Z=2. Geek goals.
8th Kick: X=1, Y=7, Z=2. Nerd goals.
9th Kick: X=1, Y=7, Z=1. 
Goalie saves and ends the game.

Example 2:

Input: 
X = 13, Y = 10, Z = 7

Output: 0 3

Explaination: Since X is a prime number, 
Geek will never goal. 

Your Task:
You do not need to read input or print anything. Your task is to complee the function goals() which takes X, Y and Z as input parameters and returns a list of integers containing two elements denoting the number of goals scored by Geek and Nerd respectively. 


Expected Time Complexity: O(Z)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ X, Y, Z ≤ 105
Solution - 
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> goals(int X, int Y, int Z){
        // code here
        vector<int> vec;
        int count_geek = 0, count_nerd = 0;
        while(Z != 1) {
            
            //Goals geek
            if(X % Z == 0 && Y % Z == 0) {
                X--;
                count_geek ++;
            }
            
            //goals saved
            else if(X % Z != 0 && Y % Z != 0) {
                Z--;
            }
            
            //goal by nerds
            else if(X % Z != 0 && Y % Z == 0) {
                Y--;
                count_nerd++;
            }
            
            //goals by geeks
            else if(X % Z == 0 && Y % Z != 0) {
                count_geek++;
                X--;
            }
        }
        vec.emplace_back(count_geek);
        vec.emplace_back(count_nerd);
        
        return vec;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends
