#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    for(int i=1; i<str.length(); i++){
        if(str[i] == str[i-1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}