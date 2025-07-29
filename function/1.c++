// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//     int ad=a+b;
//     cout<<"Total sum :-";
//     return ad;
// }
// int main (){
//     int x,y;
//     cout<<"Enter input";
//     cin>>x>>y;
//     cout<<sum(x,y)<<endl;
//        return 0;
// }



// #include<iostream>
// using namespace std;

// int sum(int n,int add=0){
//     for(int i=1;i<=n;i++){
//         add=add+i;
//     }
//     return add;
// }
// int main(){
//     cout<<"sum"<<sum(3)<<endl;
//     return 0;
// }

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
    int x;
    cin>>x;
    cout<<"factorial__"<< pic(x)<<endl;
    return 0;
}


















