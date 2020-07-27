#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str, ans="NO";
    cin>>str;
    for (auto ch: str) {
        if (ch==72) {
            ans = "YES";
        }
        if (ch == 81) {
            ans = "YES";
        }
        if (ch == 57) {
            ans = "YES";
        }
    }
    cout<<ans<<endl;
    return 0;
}