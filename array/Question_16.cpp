// calculate the sum of all element in the given array?.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for( int i=0; i<n; i++){
        sum=sum + arr[i]; 
    }
    cout<<sum;
}