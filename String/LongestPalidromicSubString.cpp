#include <bits/stdc++.h>
using namespace std;

int pali(string s,int left,int right){
    if(left>right) return 0;

    while(left>=0 && right<s.length() && s[left] == s[right]){
        left--;
        right++;
    }
    // cout<<"Parul Sura "<<right-left-1<<endl;
    return right-left-1;
}
string Palidrome(string s)
{
    if (s.length() == 0)
        return "";
    if (s.length() == 1)
        return s;

    int start = 0, end = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        int len1 = pali(s,i,i);
        int len2 = pali(s,i,i+1);
        int maxi = max(len1,len2);
        cout<<"MAxi is "<<maxi<<endl;
        cout<<"end-start "<<end-start<<endl;
        if(maxi> (end - start)){
            start = i-((maxi-1)/2);
            
            end = i+((maxi)/2);
            cout<<"Inside if-else end-start is "<<end-start<<endl;
            cout<<"Hello "<<s.substr(start,end+1)<<endl;
        }


    }

    return s.substr(start,end+1);
}
int main()
{
    string str;
    cin >> str;
    cout << "Palidromic SubString is : " << Palidrome(str);
    return 0;
}