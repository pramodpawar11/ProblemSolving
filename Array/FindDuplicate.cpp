// 11. Find the Duplicate Number
#include<bits/stdc++.h>
using namespace std;
int findDublicate(vector<int> arr){
    int i = 0;
    while(arr[i]!=arr[arr[i]]){
        swap(arr[i],arr[arr[i]]);
    }
    return arr[i];
}
int main(){
    vector<int> nums{1,3,4,2,2};
    cout<<findDublicate(nums);
}