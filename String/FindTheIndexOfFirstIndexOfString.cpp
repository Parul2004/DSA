#include<bits/stdc++.h>
using namespace std;
int indexFound(string str1,string str2){
    if(str1.length()<str2.length()) return -1;
    if(str1==str2) return 0;

    for(int i = 0;i<str1.length()-str2.length()+1;i++){
        if(str1.substr(i,str2.length()) == str2) return i;
    }
    return -1;
}
int main(){
    string total1 = "sadbutsad";
    string found1 = "sad";

    string total2 = "leetcode";
    string found2 = "leeto";

    cout<<indexFound(total1,found1)<<endl;
    cout<<indexFound(total2,found2)<<endl;
    return 0;
}