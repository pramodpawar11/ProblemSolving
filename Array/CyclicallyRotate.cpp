// 7.Cyclically rotate an array by one
#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[],int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,size); 
    for(auto i:arr){
        cout<<i<<" ";
    }
}