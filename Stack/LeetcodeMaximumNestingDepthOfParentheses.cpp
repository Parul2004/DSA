#include<bits/stdc++.h>
using namespace std;
int maxDepthThroughStack(string str){
    stack<char>st;
    int maxi = 0;
    for(int i = 0;i<str.size();i++){
        if(str[i]=='('){
            st.push('(');
        }
        else if(str[i]==')'){
            if(maxi<st.size()) maxi = st.size();
            st.pop();
        }
    }

    return maxi;
}
int maxDepthThroughString(string str){
    int open = 0;
    int maxi = 0;
    for(int i = 0;i<str.size();i++){
        if(str[i]=='('){
            open++;
        }
        else if(str[i]==')'){
            if(maxi<open) maxi = open;
            open--;
        }
    }

    return maxi;
}
int main(){
    
    string str;
    cin>>str;
    cout<<maxDepthThroughStack(str)<<endl;
    cout<<maxDepthThroughString(str)<<endl;
    return 0;
}