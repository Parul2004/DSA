#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    int d;
    cin >> d;
    if (c != 'M' && c != 'F')
    {
        cout << "InValid Gender";
    }
    else
    {

        if (d < 0)
        {
            cout << "Invalid no. of dependents";
        }
        else
        {
            if (c == 'M')
            {

                if (d == 0)
                {
                    cout << "Male employee will get 10 percent deduction";
                }
                else if (d == 1)
                {
                    cout << "Male employee will get 20 percent deduction";
                }
                else
                {
                    cout << "Male employee will get 30 percent deduction";
                }
            }
            else if (c == 'F')
            {

                if (d == 0)
                {
                    cout << "FeMale employee will get 15 percent deduction";
                }
                else if (d == 1)
                {
                    cout << "FeMale employee will get 25 percent deduction";
                }
                else
                {
                    cout << "FeMale employee will get 35 percent deduction";
                }
            }
        }
    }
    return 0;
}