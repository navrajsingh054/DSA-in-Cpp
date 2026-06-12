#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
int maxProd = INT_MIN;
for(int i = 0;i < n;i++){
    int prod = 1;
    for(int j = i;j < n;j++){
        prod = prod * arr[j];
        maxProd = max(prod,maxProd);
    }
}
cout<<maxProd<<endl;
}