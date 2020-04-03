#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int l = (a>b)? a:b;

    for(unsigned long long int i=l;i>0;i--){
        if(a%i==0 && b%i==0){
            l = i;
            break;
            }
        }
    cout<<(a*b)/l<<" "<<l<<endl;
}