#include<iostream>
using namespace std;

int main(){
    int c;
    cin>>c;
  

    if(c%20==0){
        cout<<"0"<<endl;
    }
    else if(c%10 == 0){
        cout<<"1"<<endl;
    }
    else if(c%5 == 0){
        cout<<"2"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
   
    return 0;
}