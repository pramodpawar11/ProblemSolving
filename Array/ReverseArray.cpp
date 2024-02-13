// 1.reverse the Array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++,e--;
    }
}
int main(){
    int arr[] = {4, 5, 1, 2};
    int size = 4;
    reverseArray(arr,size);
    for(auto i:arr){
        cout<<i<<" ";
    }
}