// 8.find Largest sum contiguous Subarray
#include<bits/stdc++.h>
using namespace std;
int kadanes(int arr[],int size){
    int store = INT_MIN;
    for(int i=0;i<size;i++){
        int sum = 0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum>store) store = sum;
        }
    }
    return store;
}
int main(){
    int arr[] = {-4,5,3,2,-4,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<kadanes(arr,size);
}