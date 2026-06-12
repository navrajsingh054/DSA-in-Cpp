#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
set<int> s;
int n;
cin>>n;
vector<int>arr1(n);
for(int i = 0;i < n;i++){
    cin>>arr1[i];
    s.insert(arr1[i]);
}
int m;
cin>>m;
vector<int>arr2(m);
for(int i = 0;i < m;i++){
    cin>>arr2[i];
    s.insert(arr2[i]);
}
for(int val : s){
    cout<<val<<" ";
}
return 0;
}