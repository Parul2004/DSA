#include<iostream>
using namespace std;

int main(){
    char S;
    cin>>S;
    if(S>'A' && S<='Z' || S>='a' && S<='z'){
        cout<<0<<endl;
    }
    else if(S>=48 && S<=58){
       cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    return 0;
}