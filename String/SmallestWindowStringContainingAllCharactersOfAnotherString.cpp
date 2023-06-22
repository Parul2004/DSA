#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "toc";
    string s2 = "timetopractice";

    map<char, int> mpp2;

    for (int i = 0; i < s2.length(); i++)
    {
        mpp2[s2[i]]++;
    }
    int mct = 0, dmct = s2.length();

    map<char, int> ans;
    int ansLen = 0;
    int i = -1, j = -1;
    string ansStr = "";
    while (true)
    {
        bool flag1 = false;
        bool flag2 = false;

        // acquire
        while (i < s1.length() - 1 && mct < dmct)
        {
            i++;
            char ch = s1[i];
            ans[ch]++;

            if (ans[ch] <= mpp2[ch])
            {
                mct++;
            }
            flag1 = true;
        }
        // collect ans

        while (j < i && mct == dmct)
        {
            string pans = s1.substr(j + 1, i + 1);
            if ( ansStr.length() == 0 || pans.length() < ansStr.length())
            {
                ansLen = pans.length();
                ansStr = pans;
            }

            // release
            j++;
            char ch = s1[j];
            if (ans[ch] == 1)
            {
                ans.erase(ch);
            }
            else
            {
                ans[ch]--;
            }

            if (ans[ch] < mpp2[ch])
                mct--;

            flag2 = true;
        }

        if(flag1 == false && flag2 == false) break;
    }

    cout<<ansStr<<endl;

    return 0;
}