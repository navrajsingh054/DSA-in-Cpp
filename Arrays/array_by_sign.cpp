#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
vector<int> ans(n);
int posIdx = 0;
int negIdx = 1;
for(int i = 0;i < n;i++){
    if(arr[i] >= 0){
    ans[posIdx] = arr[i];
        posIdx += 2;
    } else {
        ans[negIdx] = arr[i];
        negIdx += 2;
    }
}
for(int i = 0;i < n;i++){
    cout<<ans[i]<<" ";
}
return 0;
}