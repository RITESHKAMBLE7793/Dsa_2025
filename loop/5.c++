// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=4;j++){
//              cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter No";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Table of :"<<i<<endl;
        for(int j=1;j<=10;j++){
            cout<<i<<"X"<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }
    return 0;
}

