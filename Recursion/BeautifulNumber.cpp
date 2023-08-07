#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
bool beautifulNumber(int n)
{
    // code here
   
    cout << "Hello Parul\n";
    int sum = 0;
    while (n != 0)
    {
        int a = n % 10;
        sum = (sum) + pow(a, 2);
        n /= 10;
    }
    cout << "Sum is " << sum << endl;
    if (sum == 1)
        return true;

     if (count(ans.begin(), ans.end(), sum))
        return false;

    ans.push_back(sum);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << "hello good girl\n";
    bool res = beautifulNumber(sum);
    cout << "dyan dyan satguru tera he aashra\n";
    cout << "dyan dyan satguru tera he aashra\n";

    return res;
}
int main()
{

    cout << beautifulNumber(91) << endl;
    return 0;
}