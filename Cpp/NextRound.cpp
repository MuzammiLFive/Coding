#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int num = v.at(k-1);
    int count=0;
    
    for(int i=0;i<n;i++){
        if(v.at(i)>=num && v.at(i)!=0){
            count++;
        }
        else{
            break;
        }
    }

    cout<<count<<endl;
    return 0;
}