#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Solve(string A, string B, string str, int p1, int p2, vector<string> &s){
    //base condition
    if(p1>A.size()){
        if(str.length() > A.size()+B.size() && find(s.begin(), s.end(), str)==s.end()){
            s.push_back(str);    
        }
        return;
    }
    if(p2>B.size()){
        if(str.length() > A.size()+B.size() && find(s.begin(), s.end(), str)==s.end()){
            s.push_back(str);    
        }
        return;
    }
    
    //Main logic
    Solve(A, B, str+A[p1], p1+1, p2, s);
    Solve(A, B, str+B[p2], p1, p2+1, s);
    return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int j=0;
    while(j!=t){
        j++;
        cout<<"Case #"<<j<<":"<<endl;
        string A, B;
        cin>>A>>B;
        vector<string> s;
        Solve(A, B, "", 0, 0, s);
        sort(s.begin(), s.end());
        for(int i=0;i<s.size();i++){
            cout<<s[i];
            if(i!=s.size()-1){
                cout<<endl;
            }
        }
        if(j!=t)
            cout<<endl;
    }
    return 0;
}
