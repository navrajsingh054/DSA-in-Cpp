#include<iostream>
#include<string>
using namespace std;
int main(){
string main;
getline(cin,main);
string pattern;
getline(cin,pattern);

int n = main.length();
int m = pattern.length();
for(int i = 0;i <= n-m;i++){
    bool flag = true;
    for(int j = 0;j < m;j++){
        if(main[i+j] != pattern[j]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<i<<endl;
        return 0;
    }
}
cout<<-1;
return 0;
}