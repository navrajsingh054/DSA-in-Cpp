#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
vector<int> ans;
ans.push_back(arr[n-1]);
int gt = arr[n-1];
for(int i = n-1;i > 0;i--){
    if(arr[i-1] > gt){
        gt = arr[i-1];
        ans.push_back(gt);
    }
}
for(int i = ans.size()-1;i >= 0;i--){
    cout<<ans[i]<<" ";
}
return 0;
}
