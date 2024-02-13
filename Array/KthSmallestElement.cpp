// 3.Kth smallest element
#include<bits/stdc++.h>
using namespace std;
int kthSamllest(int arr[],int size,int k){
    sort(arr,arr+size);
    return arr[k-1];

}
int main(){
    int arr[]={7 ,10, 4 ,20 ,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout<<kthSamllest(arr,size,k);
}