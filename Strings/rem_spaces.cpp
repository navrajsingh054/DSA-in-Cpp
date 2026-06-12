#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),' '),s.end());
for(char ch : s){
    cout<<ch;
}
    return 0;
}