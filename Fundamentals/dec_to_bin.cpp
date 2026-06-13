#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int num = 0;
int curr_pow = 1;
while(n > 0){
    int rem = n % 2;
    num += rem * curr_pow;
    curr_pow *= 10;
    n /= 2;
}
cout<<num<<endl;
return 0;
}
