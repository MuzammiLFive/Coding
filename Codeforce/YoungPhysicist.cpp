#include<iostream>
using namespace std;

int main(){
    int n, tot[3];
    tot[0] = 0;
    tot[1] = 0;
    tot[2] = 0;
    string ans = "YES";
    cin>>n;
    while(n--){
        int x, y, z;
        cin>>x>>y>>z;
        tot[0] = tot[0]+x;
        tot[1] = tot[1]+y;
        tot[2] = tot[2]+z;
    }
    for(int i=0; i<3; i++)
    if(tot[i] != 0){
        ans = "NO";
    }
    cout<<ans;
    return 0;
}