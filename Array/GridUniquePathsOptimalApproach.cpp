#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int rows,int cols){
   int N = rows+cols-2;
   int r = rows - 1;

   double res = 1;

   for(int i = 1;i<=r;i++){
    res = res*(N-r+i)/i;
   }

   return (int)res;
}
int main(){
    // Time Complexity - O(n-1) || O(m-1)
    // Space Complexity - O(1)
    int totalPaths = uniquePaths(3,2);
    cout<<"The Total number of Unique Paths are "<<totalPaths<<endl;
    return 0;
}