#include <iostream>
#include <set>
using namespace std;

int main() {
    string str;
    cin>>str;
    set<string> ans, temp;
    
    for (int i=0; i<str.length(); i++) {
        if (temp.find(to_string(str[i])) == temp.end()) {
            temp.insert(to_string(str[i]));
            if (temp.size() > ans.size()) {
                ans = temp;
            }
        }
        else {
            temp.clear();
        }
    }
    cout<<ans.size();
    return 0;
}