#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
string s;
getline(cin,s);
unordered_map<char,int> m;
unordered_set<char> a;
for(char ch : s){
    m[ch]++;
}
for(char ch : s){
    if((m[ch] > 1) && (a.find(ch) == a.end())){
        cout<<ch<<" ";
    }
    a.insert(ch);
}

return 0;
}