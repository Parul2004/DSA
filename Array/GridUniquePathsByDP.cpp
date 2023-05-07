#include<bits/stdc++.h>
using namespace std;
int countPaths(int i,int j,int rows,int cols,vector<vector<int>>&dp){
   if(i==(rows-1) && (j==(cols-1))) return 1;
   if(i>=rows || j>=cols) return 0;

   if(dp[i][j] != -1) return dp[i][j];

   else return dp[i][j] = countPaths(i+1,j,rows,cols,dp) + countPaths(i,j+1,rows,cols,dp);

}
int uniquePaths(int rows,int cols){
    vector<vector<int>>dp(rows+1,vector<int>(cols+1,-1));
    int num = countPaths(0,0,rows,cols,dp);
    if(rows == 1 && cols == 1) return num;
    return dp[0][0];
}
int main(){
    // Time Complexity - O(n*m)
    // Space Complexity - O(n*m)
    int totalPaths = uniquePaths(2,3);
    cout<<"The Total number of Unique Paths are "<<totalPaths<<endl;
    return 0;
}