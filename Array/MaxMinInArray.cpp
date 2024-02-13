// 2.Maximum and minimum of an array
#include<bits/stdc++.h>
using namespace std;
void findMinMax(int arr[],int size){
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi) maxi = arr[i];
        if(arr[i]<mini) mini = arr[i];
    }
    cout<<mini<<endl<<maxi;
}
int main(){
    int arr[]={22, 14, 8, 17, 35, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    findMinMax(arr,size);
}