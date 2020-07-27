#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin>>str;
    if (str.size()<5) {
        cout<<"NO"<<endl;
        return 0;
    }

    string ans = "YES", req = "hello";
    vector<int> pos;
    int x = -1;
    for (auto c: req) {
        x = str.find_first_of(c, x+1);
        pos.push_back(x);
    }
    for (int i=1; i<pos.size(); i++) {
        if(pos[i-1]==-1 || pos[i]==-1 || pos[i]<pos[i-1]) {
            ans = "NO";
        }
    }
    cout<<ans<<endl;
    return 0;
}