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
int x;
cin>>x;
int st = 0;
int end = n-1;
int floor = -1;
int ceil = -1;

while(st <= end){
    int mid = st + (end-st)/2;
    if(arr[mid] <= x){
        floor = arr[mid];
        st = mid + 1;
    }
    else {
        end = mid - 1;
    }
}
st = 0;
end = n-1;
while(st <= end){
    int mid = st + (end-st)/2;
    if(arr[mid] >= x){
        ceil = arr[mid];
        end = mid - 1;
    }
    else {
        st = mid + 1;
    }
}
cout<<"Floor = "<<floor<<endl;
cout<<"Ceil = "<<ceil<<endl;
}