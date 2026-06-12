#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
string s;
getline(cin,s);
unordered_set<char> a;
for(char ch : s){
    if(a.find(ch) == a.end()){
        cout<<ch;
    }
    a.insert(ch);
}
return 0;
}