#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int num = 0;
int curr_pow = 1;
while(n > 0){
    int ld = n % 10;
    num += ld * curr_pow;
    curr_pow *= 2;
    n/=10;
}
cout<<num<<endl;
return 0;
}
