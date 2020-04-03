#include<algorithm>
#include<iostream>

using namespace std;

int BSlow(int ar[], int n, int q){
    int lo=0, hi=n-1, mid, ans=0;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(q==ar[mid]){
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

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    sort(ar, ar+n);
    int q;
    cin>>q;
    cout<<BSlow(ar, n, q);
    return 0;
}