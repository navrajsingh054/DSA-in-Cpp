#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

int a = 0;
int b = 1;
if(n <= 0) return 0;

if(n == 1){
    cout<<a<<endl;
    return 0;
} else {
cout<<a<<" "<<b<<" ";
int i = 3;
while(i <= n){
    int sum = a + b;
    cout<<sum<<" ";
    a = b;
    b = sum;
    i++;
}
}
return 0;
}