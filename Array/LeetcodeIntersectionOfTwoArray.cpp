#include <bits/stdc++.h>
using namespace std;

vector<int> IntersectionOfV1V2(vector<int> v1, vector<int> v2)
{

    set<int> s1;
    set<int> s2;

    for (int i = 0; i < v1.size(); i++) s1.insert(v1[i]);
   
    for (int i = 0; i < v2.size(); i++)  s2.insert(v2[i]);
   
    map<int, int> m;

    for (auto i : s1) m[i]++;
   
    for (auto i : s2)   m[i]++;
   
    vector<int> v;
    for (auto i : m)
    {
        if (i.second > 1)  v.push_back(i.first);
    }

    return v;
}

/*
// small solution for this is

vector<int>IntersectionOfV1V2(vector<int> v1, vector<int> v2){

    vector<int>v;

    for(auto i:v1){
        if(count(v2.begin(),v2.end(),i)>=1){  //checks if the number present in "v1" is also present in "v2" 

            if(count(v.begin(),v.end(),i) == 0){  //checks if the number present in both "v1" and "v2" is already in "v" vector or not
              
                v.push_back(i);
            }
        }
    }

    return v;
}

*/

int main()
{

    /********Duplicates cann't be consisder**********/

    vector<int> v1 = {1, 2, 2, 1};
    vector<int> v2 = {2, 2};

    vector<int> v = IntersectionOfV1V2(v1, v2);

cout<<"Intersection of V1 and V2 vector is : ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}