#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int>arr(n);
for(int i = 0;i < n;i++){
    cin>>arr[i];
}
if(n == 1){
    cout<<arr[0]<<endl;
    return 0;
}
if(arr[0] != arr[1]){
    cout<<arr[0]<<endl;
    return 0;
}
if(arr[n-1] != arr[n-2]){
    cout<<arr[n-1]<<endl;
    return 0;
}
int st = 1;
int end = n-2;
int ans = 0;
while(st <= end){
    int mid = st + (end-st)/2;
    if((arr[mid] != arr[mid-1]) && (arr[mid] != arr[mid+1])){
        ans = arr[mid];
        break;
    }
    if(((mid % 2 != 0) && (arr[mid] == arr[mid - 1])) || ((mid % 2 == 0) && (arr[mid] == arr[mid + 1]))){
        st = mid+1;
    }
    else{
        end = mid-1;
    }
}
cout<<ans<<endl;
return 0;
}