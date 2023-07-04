#include<bits/stdc++.h>
using namespace std;
int setBits(int n) {
        // Write Your Code here
        int c = 0;
        while(n>0){
            if(n%2 == 1){
                c++;
            }
            n/=2;
        }
        return c;
}
int convertIntoBinary(int n){
    int arr[100] = {0};
    int i = 0;
    while(n!=0){
        arr[i++] = n%2;
        n/=2;
    }

return n;
}
int main(){
    int n;
    cin>>n;
    // int num = convertIntoBinary(n);
    cout<<setBits(n)<<endl;
    return 0;
}