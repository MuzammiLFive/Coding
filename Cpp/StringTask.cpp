#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
            //nothing
        }
        else{
            char temp = str[i];
            s.append(".");
            s = s + str[i];
        }
    }
    cout<<s;
    return 0;
}