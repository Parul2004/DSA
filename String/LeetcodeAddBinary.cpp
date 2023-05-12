#include <bits/stdc++.h>
using namespace std;
int binaryToDeci(int c)
{
    int ans = 0, i = 0;
    while (c != 0)
    {
        ans = ans + (c % 10) * pow(2, i);
        c/=10;
        i++;
    }
    return ans;
}

int DeciToBinary(int c)
{
    int arr[100] = {0}, i = 0;
    while (c > 0)
    {
        arr[i++] = c % 2;
        c /= 2;
    }
    string s = "";
    for (int j = i - 1; j >= 0; j--)
    {
        s += to_string(arr[j]);
    }
    return stoi(s);
}
string addBinary(string a, string b)
{
    int c = stoi(a);
    int d = stoi(b);

    int num1 = binaryToDeci(c);
    int num2 = binaryToDeci(d);

   

    int sum = num1 + num2;

    int res = DeciToBinary(sum);
  
    return to_string(res);
}
int main()
{
    string a = "1110110101";
    string b = "1110110101";
    string ans = addBinary(a, b);
    cout << ans << endl;
    return 0;
}