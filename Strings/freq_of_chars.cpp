#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    unordered_set<char> printed;
    for(char ch : s){
        if(printed.find(ch) == printed.end()){
            cout << ch << " " << freq[ch] << endl;
            printed.insert(ch);
        }
    }
    return 0;
}