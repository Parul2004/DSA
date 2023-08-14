#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int num1 = 1;
    int cnt = 0;
    int k = 5;
    int i = 0;
    while (i<5)
    {
        
        if(arr[i]==num1){
            i++;
        }
        else{
            cnt++;
        }
        if(cnt == k) break;
        num1++;
    
    }

    while(true){
        cnt++;
        
        if(cnt==k){
            break;
        }
        num1++;
        
    }
    cout<< num1;
    return 0;
}