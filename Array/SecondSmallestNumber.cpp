#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if((x<y) && (z>y)){
        cout<<y<<endl;
    }
    else if((x>y) && (x<z)){
        cout<<x<<endl;
    }
    else{
        cout<<z<<endl;
    }
    return 0;
}