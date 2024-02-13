
// 6.Union of two arrays
#include<bits/stdc++.h>
using namespace std;
int unionOfArray(int arr1[],int arr2[],int size1,int size2,vector<int> store){
    for(int i=0;i<size1;i++){
        store.push_back(arr1[i]);
    }
    for(int i=0;i<size2;i++){
        bool flag = false;
        for(int j=0;j<store.size();j++){
            if(arr2[i]==store[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            store.push_back(arr2[i]);
        }
    }
    return store.size();
}
int main(){
    int arr1[]= {1, 2 ,3 ,4 ,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {1 ,2 ,3};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> store;
    cout<<unionOfArray(arr1,arr2,size1,size2,store);
}
