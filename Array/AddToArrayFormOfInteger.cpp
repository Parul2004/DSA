#include<bits/stdc++.h>
using namespace std;

  vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int>ans;
        vector<int>raw;

        while(k>0){
            raw.push_back(k%10);
            k/=10;
        }
         int j = 0,i=0;
         int m = num.size();
         int n = raw.size();
         int count = 0;

         while(count!=0 || m>j || n>i){
             int sum = count;
             if(m>j){
                 sum = sum+num[m-1];
                 m-=1;
             }

             if(n>i){
                 sum = sum+raw[i++];
             }

           

             int digit = sum%10;
             ans.push_back(digit);
             count = sum/10;

         }
         vector<int>parul;
         for(int i = ans.size()-1;i>=0;i--){
             parul.push_back(ans[i]);
         }
         return parul;
  }
int main(){
    
    vector<int>v = {1,2,0,0};
    int k = 34;
    vector<int>ans = addToArrayForm(v,k);
    for(auto i :ans){
        cout<<i<<" ";
    }
    return 0;
}