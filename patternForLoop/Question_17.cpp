// print the given pattern ?.
// *******
// *     *
// *     *
// *     * 
// *     *
// *******

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter num of m : ";
    cin>>m;
    int n;
    cout<<"enter num of n : ";
    cin>>n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==m || j==1||j==n) {
            cout<< "* ";
            }
            else { cout<< "  ";
            }
           
        }
        cout<<endl;
    }
}