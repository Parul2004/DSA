#include<bits/stdc++.h>
using namespace std;

int main(){
    string chars;
    cin>>chars;
    int n = chars.length(), i = 0;
  

    unordered_map<char,int>mpp;
        for(int i = 0;i<n;i++){
              mpp[chars[i]]++;
        }

        string s="";
        for(auto i:mpp){
            s+=i.first;
           
            s+=to_string(i.second);
        }
        
        cout<<"String is "<<s<<" and its length is "<<s.length()<<endl;
    return 0;
}