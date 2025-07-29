
#include<iostream>
using namespace std;
int pic(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        m*=i;
    }
    return m;
}
int main(){
    cout<<"pictorial"<<pic(3)<<endl;
    return 0;
}