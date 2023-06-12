#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 0 && n <= 999)
    {
        int s = 0;
        while(n!=0){
            if(n%10==5){
                s++;
            }
            n/=10;
        }
        if(s==1){
            cout<<"5 is occurring only once\n";
        }
        else if(s>=2){
              cout<<"5 is occurring more than once\n";
        }

        else{
            cout<<"There is no occurrence of 5\n";
        }
    }
    else
    {
        cout << "Invalid Number";
    }
    return 0;
}