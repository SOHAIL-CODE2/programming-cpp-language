// PRINT the given pattern?.
//        *
//      * * *
//    * * * * *
//      * * *
//        * 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num : ";
    cin>>n;
    int nsp=n/2;
    int nst= 1;
    int ml =n/2 +1;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"*";
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
}