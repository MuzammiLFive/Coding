#include<iostream>
#include<set>
using namespace std;

int main(){
    string str, ans = "CHAT WITH HER!";
    cin>>str;
    set<char> st;
    for(int i=0; i<str.length(); i++){
        st.insert(str[i]);
    }
    if(st.size()&1){
        ans = "IGNORE HIM!";
    }
    cout<<ans;
    return 0;
}