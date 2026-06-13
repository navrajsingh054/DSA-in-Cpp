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
int target;
cin>>target;
int start = 0;
int end = n-1;
int ans = n;
while(start <= end){
    int mid = start + (end - start)/2;
    if(arr[mid] >= target){
        ans = mid;
        end = mid-1;
    }
    else {
       start = mid+1;
    }
}
cout<<ans<<endl;
return 0;
}
