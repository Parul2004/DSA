#include <bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int> &v)
{
    set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }

    // total number of elements left after removing duplicates

    int n = s.size();

    // to clear vetcor "v"

    v.clear();

    for (auto i : s)
    {
        v.push_back(i);
    }

    return v;
}
/*

// second Solution

vector<int> removeDuplicates(vector<int> &v){
    int i = 0;

    for(int j = 1;j<v.size();j++){
           if(v[i]!=v[j]){

            i++;
            v[i] = v[j];

           }
    }


    int n = i+1;
    return v;
}

*/
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);

    vector<int> newV = removeDuplicates(v);

    cout << "After Removing Duplicates : ";
    for (auto i : newV)
    {
        cout << i << " ";
    }

    return 0;
}