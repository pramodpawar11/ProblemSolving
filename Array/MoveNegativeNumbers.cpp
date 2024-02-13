// 5.Move all negative numbers to beginning and positive to end with constant extra space
#include<bits/stdc++.h>
using namespace std;
void moveNegativePositive(int arr[],int size){
    int negative = 0;
    int positive = size-1;
    int i=0;
    while(i<=positive){
        if(arr[i]<0){
            swap(arr[negative],arr[i]);
            negative++,i++;
        }
        else{
            swap(arr[positive],arr[i]);
            positive--,i++;
        }
    }
}
int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = sizeof(arr)/sizeof(arr[0]);
    moveNegativePositive(arr,size);
    for(auto i:arr){
        cout<<i<<" ";
    }
}
