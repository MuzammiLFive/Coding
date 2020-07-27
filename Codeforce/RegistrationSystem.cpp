#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin>>N;
    unordered_map<string, int> db;
    while (N--) {
        string name, ans="";
        cin>>name;
        if (db.find(name) != db.end()) {
            db[name]++;
            ans = name + to_string(db[name]);
        }
        else {
            db[name] = 0;
            ans = "OK";
        }
        cout<<ans<<endl;
    }
    return 0;
}