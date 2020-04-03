#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int BSlow(int ar[], int n, int q){
    int lo=0, hi=n-1, mid, ans=0;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(ar[mid] == q){
            ans = mid;
            hi = mid-1;
        }
        else if(q>ar[mid]){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}

int BShigh(int ar[], int n, int q){
    int lo=0, hi=n-1, mid, ans=0;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(ar[mid] == q){
            ans = mid;
            lo = mid+1;
        }
        else if(q>ar[mid]){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
        
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int N[n];
    for(int i=0; i<n; i++){
        cin>>N[i];
    }
    
    int q;
    cin>>q;
    int Q[q];
    for(int i=0; i<q; i++){
        cin>>Q[i];
    }
    
    sort(N, N+n);
    for(int i=0; i<q; i++){
        int l = BSlow(N, n, Q[i]);
        int r = BShigh(N, n, Q[i]);
        if(l!=r){
            cout<<(r-l)+1;
        }
        else if(N[l]==Q[i]){
            cout<<"0";
        }

    }
    return 0;
}
