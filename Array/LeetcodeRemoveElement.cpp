#include <bits/stdc++.h>
using namespace std;

vector<int> RemoveElement(vector<int> &v, int val)
{

   vector<int>f;
  

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != val)
        {
           f.push_back(v[i]);
        }
    }
    return f;
}
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(3);
    v.push_back(31);
    v.push_back(2);
    v.push_back(7);

    vector<int> g = RemoveElement(v, 3);
    for (auto i : g)
    {
        cout << i << " ";
    }

    return 0;
}