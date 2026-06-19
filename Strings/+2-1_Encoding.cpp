#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i = 0;i < s.length();i++){
    char ch = s[i];
    if(ch == ' '){
        cout<<"Error"<<endl;
        return 0;
    }

    if(i % 2 == 0){
        if(ch >= 'A' && ch <= 'Z'){
            if(ch == 'Z'){
                ch = 'B';
            }
            else {
                ch += 2;
            }
        }
        else if(ch >= 'a' && ch <= 'z'){
            if(ch == 'z'){
                ch = 'b';
            }
            else {
                ch += 2;
            }
        }
        else if(ch >= '0' && ch <= '9') {
            ch = '9';
        }
    }
    else {
         if(ch >= 'A' && ch <= 'Z'){
            if(ch == 'A'){
                ch = 'Z';
            }
            else {
                ch -= 1;
            }
        }
        else if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a'){
                ch = 'z';
            }
            else {
                ch -= 1;
            }
        }
        else if(ch >= '0' && ch <= '9') {
            ch = '9';
        }
    }
    cout<<ch;
}
return 0;
}