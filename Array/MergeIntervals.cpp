// 14.Merge Intervals;
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>merger(vector<vector<int>>intervalss){
    vector<vector<int>> ans;
    for(int i=0;i<intervalss.size();i++){
        if(ans.empty() || intervalss[i][0] > ans.back()[1] ) ans.push_back(intervalss[i]);
        else{
            ans.back()[1] = max(ans.back()[1],intervalss[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> intervalss{
    {1,6},
    {2,5},
    {8,10},
    {15,18}};
    vector<vector<int>>ans = merger(intervalss);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}