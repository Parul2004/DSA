#include<iostream>
using namespace std;
int NoOf1Bits(int n){
    int c = 0;
    while(n!=0){
        c+=(n%2);
        n>>=1;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<NoOf1Bits(n);
    return 0;
}