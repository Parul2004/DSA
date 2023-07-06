#include<bits/stdc++.h>
using namespace std;
int digits(int n){
    int c = 0;
    while(n!=0){
        c++;
        n/=10;
    }
    return c;
}
int countMatching(int n){
       int countDigits = digits(n);
       int count = 0;
        while(n!=0){
            int a = n%10;
            if(a==1 || a==2 || a==3 || a==4 || a==5){
                count++;
            }
            n/=10;
        }
        if(count == countDigits) return 1;
        return 0;
    }
    int countNumbers(int n) {
        // code here
        int count = 0;
        
        for(int i = 1;i<=n;i++){
            count +=countMatching(i);
            cout<<"for "<<i<<" count is "<<count<<endl;
        }
        
        return count;
    }
int main(){
    int n;
    cin>>n;
    cout<<countNumbers(n);
    return 0;
}