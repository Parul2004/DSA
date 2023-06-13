#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  
        switch (n)
        {
        case 0:
        cout<<"SUNDAY\n";
            break;
        case 1:
        cout<<"MONDAY\n";
            break;
        case 2:
        cout<<"TUESDAY\n";
            break;
        case 3:
        cout<<"WEDNESDAY\n";
            break;
        case 4:
        cout<<"THURSDAY\n";
            break;
        case 5:
        cout<<"FRIDAY\n";
            break;
        case 6:
        cout<<"SATURDAY\n";
            break;
        
        default:
        cout<<"INVALID";
            break;
    }
    
    return 0;
}