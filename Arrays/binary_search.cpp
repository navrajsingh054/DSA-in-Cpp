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
while(start <= end){
    int mid = start + (end - start)/2;
    if(arr[mid] == target){
        cout<<mid<<endl;
        return 0;
    }
    if(arr[mid] < target){
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }
}
cout<<-1<<endl;
return 0;
}
