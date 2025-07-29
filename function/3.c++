#include<iostream>
using namespace std;

int printtable(int n){
    int p;
     for(int i=1;i<=10;i++){
        p=i*n;
        cout << n << " x " << i << " = " << p << endl;
     }
 }
int main(){
    int x;
    cout<<"Enter No :";
    cin>>x;
cout<<printtable(x)<<endl;
  
return 0;
};

