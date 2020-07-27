#include<iostream>
using namespace std;

int main(){
    string str, ans="NO";
    cin>>str;
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '0'){
            count++;
            if(count == 7){
                ans = "YES";
                break;
            }
        }
        else{
            count = 0;
        }
    }
    count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '1'){
            count++;
            if(count == 7){
                ans = "YES";
                break;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<ans;
    return 0;
}