// 13.kadanes algo 
#include<bits/stdc++.h>
using namespace std;
int kadanes(int arr[],int size){
    int maxi = INT_MIN;
    int store = 0;
    for(int i=0;i<size;i++){ 
        store+=arr[i];
        if(store>maxi) maxi = store;
        if(store<0) store = 0;
    }
    return maxi;
}
int main(){
    int arr[] = {-4,5,3,2,-4,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<kadanes(arr,size);
}
