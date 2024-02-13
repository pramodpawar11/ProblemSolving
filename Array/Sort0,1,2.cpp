// 4.Sort an array of 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;
void sortTheArray(int arr[],int size){
    int zeros = 0;
    int ones = 0;
    int twos = size-1;
    while(ones<=twos){
        if(arr[ones] == 0){
            swap(arr[ones],arr[zeros]);
            ones++,zeros++;
        }
        else if(arr[ones]==1){
            ones++;
        }
        else{
            swap(arr[ones],arr[twos]);
            ones++,twos--;
        }
    }
} 
int main(){
    int arr[]={0,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortTheArray(arr,size);
    for(auto i:arr){
        cout<<i<<" ";
    }
}