#include <bits/stdc++.h>
using namespace std;

string converts(int s,int e){
    if(s == e) return to_string(s);
    else return to_string(s)+"->"+to_string(e);
}
vector<string> summaryRanges(vector<int> nums)
{
    vector<string> v;
    int n = nums.size();
    if (nums.size() == 0)
        return v;
    int s = nums[0];

    for(int i = 0;i<nums.size()-1;i++){

        if(nums[i]+1 != nums[i+1]){
            v.push_back(converts(s,nums[i]));
            s = nums[i+1];
        }
    }

    v.push_back(converts(s,nums[n-1]));
    return v;
}
int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(7);

    vector<string> g = summaryRanges(nums);

    for(auto i:g){
        cout<<i<< " ";
    }
    return 0;
}