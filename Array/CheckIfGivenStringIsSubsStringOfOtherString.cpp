#include<bits/stdc++.h>
using namespace std;
int compare(int arr1[],int arr2[]){
    for(int i = 0;i<256;i++){
        if(arr1[i] != arr2[i]) return 0;
    }
    return 1;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()>s2.length()) cout<<"No"<<endl;
    else {
        int arr1[256]={0},arr2[256]={0};

        for(int i = 0;i<s1.length();i++){
            arr1[s1[i]]++;
            arr2[s2[i]]++;
        }


        for(int i = s1.length();i<s2.length();i++){

            if(compare(arr1,arr2) == 1){
                cout<<"Yes"<<endl;
                return 0;
            }

            arr2[s2[i]]++;
            arr2[s2[i-s1.length()]]--;
        }

        if(compare(arr1,arr2)){
            cout<<"Yes\n";

        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}