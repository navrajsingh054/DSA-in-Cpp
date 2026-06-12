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
int minPrice = arr[0];
int maxProfit = 0;
for(int i = 1;i < n;i++){
    int profit = arr[i] - minPrice;
    minPrice = min(minPrice, arr[i]);
    maxProfit = max(profit,maxProfit);
    }
cout<<maxProfit<<endl;
return 0;
}