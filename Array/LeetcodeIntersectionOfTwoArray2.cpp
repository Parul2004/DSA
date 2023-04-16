#include <bits/stdc++.h>
using namespace std;




// small solution for this is

vector<int>IntersectionOfV1V2(vector<int> v1, vector<int> v2){

    vector<int>v;

    int n1 = v1.size();
    int n2 = v2.size();
    int arr[1001];

    for(auto it:v1){
        arr[it]++;
    }

    for(auto it:v2){
        if(arr[it]){
            v.push_back(it);
            arr[it]--;
        }
    }

    return v;
}


int main()
{

    /********Duplicates can be consisder**********/
    
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