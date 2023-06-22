#include <bits/stdc++.h>
using namespace std;
 int countSegments(string s) {
        int m = s.length();
        if(m == 0) return 0;
        int j = 0;
        while(j<s.length() && s[j]==' '){
            j++;
        }
        if(j==s.length()) return 0;
        while(m!=0 && s[m-1] == ' '){
            m--;
        }
        int c = 0;
        for(int i = j;i<m;i++){
            if(s[i] >= 'a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i] == ','){
                continue;
            }
            else if(s[i] == ' '){
                if(s[i-1] != ' '){
                    c++;
                }
                else{
                    continue;
                }
               
            }
            
        }
        return c+1;
    }
int main()
{
    string str = "Of all the gin joints in all the towns in all the world,   ";
    
    cout<<countSegments(str);
    return 0;
}