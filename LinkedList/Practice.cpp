#include <bits/stdc++.h>
using namespace std;
bool allEqual(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    int maxi = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    int mini = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] < mini && arr[i]!=0)
        {
            mini = arr[i];
        }
    }
    // cout << maxi << " " << mini << endl;

    if (mini == maxi)
        return true;
    int c = 0;
    for(int i = 0;i<26;i++){
        if(maxi == arr[i]){
            c++;
        }
    }
    if(c>1) return false;
    else if(c==1 && maxi-mini==1) return true;
    
    if (maxi - mini > 1)
        return false;
    else return true;
    return true;
}
int main()
{
    string s;
    cin >> s;
    bool f = allEqual(s);
    if(f){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
  return 0;
}