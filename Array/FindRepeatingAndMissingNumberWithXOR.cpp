#include<bits/stdc++.h>

using namespace std;

vector<int>find_missing_repeating(vector<int>&v){
    // will hold XOR of all elements and numbers from 1 To N
    int xor1;

    // Will have only single set bit of XOR1
    int set_bit_no;


    int i;
    int x=0; //missing
    int y = 0; // repeated
    int n = v.size();

    xor1 = v[0];

    for(int i=1;i<n;i++){
        xor1^=v[i];
    }

    // XOR the previous result with numbers from 1 to n

    for(int i = 1;i<=n;i++){
        xor1^=i;
    }

    // Will get the rightmost set bit in set_bit_no

    set_bit_no = xor1 & ~(xor1-1);
    


}
int main(){
     // Time complexity - O(n)
    // Space Complexity - O(1)

    vector<int> v = {3, 1, 2, 5, 3};
    vector<int> u = find_missing_repeating(v);
    for (auto i : u)
    {
        cout << i << " ";
    }
    return 0;
}