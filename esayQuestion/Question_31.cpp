// display this AP-1,3,5,7,9....... upto n terms?.

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the num : ";
    cin>>n;
    int c=1;
    for(int i=1; i<=n; i++){
        cout<<c<<" ";
        c=c+2;
    }
}