#include<iostream>
using namespace std;

int main(){
    string a, b, ans = "YES";
    cin>>a>>b;
    int j=b.length()-1;
    for (int i=0; i<a.length(); i++) {
        if (a[i] != b[j]) 
            ans = "NO";
        j--;
    }
    cout<<ans<<endl;
    return 0;
}