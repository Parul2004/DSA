#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>998 || n<=0){
        cout<<"INVALID INPUT";
    }
    else{
        int sum = 0;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        char ch = 64+sum;
        cout<<ch;
    }
    return 0;
}