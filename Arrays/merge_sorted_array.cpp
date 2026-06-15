#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr1(n);
for(int i = 0;i < n;i++){
    cin>>arr1[i];
}

int m;
cin>>m;
vector<int>arr2(m);
for(int i = 0;i < m;i++){
    cin>>arr2[i];
}
vector<int> ans;
int i = 0;
int j = 0;
    while((i < n) && (j < m)){
    if(arr1[i] < arr2[j]){
        ans.push_back(arr1[i]);
        i++;
    }
    else {
        ans.push_back(arr2[j]);
        j++;
    }
}

while(i < n){
    ans.push_back(arr1[i]);
    i++;
}

while(j < m){
    ans.push_back(arr2[j]);
    j++;
}

for(int val : ans){
    cout<<val<<" ";
}

return 0;
}
