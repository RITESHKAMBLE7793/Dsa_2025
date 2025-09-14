#include<iostream>
using namespace std;
int iseven(int n){
    if(n%2==0)
    return true;
    else{
        return false;
    }
}
int main(){
   int x;
   cout<<"Enter n:--";
   cin>>x;
    cout<<iseven(x);
}


