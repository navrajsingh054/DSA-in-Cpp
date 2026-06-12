//intersection of two arrays
// tc-O(m+n)
//sc- O(m + intersection)

#include<bits/stdc++.h>
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
    unordered_set<int> s2(arr2.begin(), arr2.end());
    unordered_set<int> printed;

for(int val : arr1){
    if(s2.count(val) && !printed.count(val)){
        cout << val << " ";
        printed.insert(val);
    }
}
}