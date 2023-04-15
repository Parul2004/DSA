#include <iostream>

#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(target - arr[i]) == mp.end())
            mp[arr[i]] = i;
        else
            return {mp[target - arr[i]], i};
    }

    return {-1, -1};

    // time complexity - O(n)
    // Space Complexity - O(n)
}

/*
vector<int> twoSum(vector<int> &arr, int target)
{

    for(int i = 0;i<arr.size();i++){

        for(int j = i+1;j<arr.size();j++){

            if(arr[i]+arr[j]) = target) return {i,j};

        }
    }

    return {-1, -1};

    // time complexity - O(n^2)
    // Space Complexity - O(1)
}
*/

int main()
{

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(15);

    int target = 9;

    vector<int> vect = twoSum(arr, target);
    for (auto i = vect.begin(); i != vect.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}