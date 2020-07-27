#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Merge(int ar[], int lo, int hi, int mid){
    int temp[hi-lo+1], k=0;
    int p1=lo, p2=mid+1;
    while(p1<=mid && p2<=hi){
        if(ar[p1]<ar[p2])
            temp[k++] = ar[p1++];
        else
            temp[k++] = ar[p2++];
    }
    
    while(p1<=mid)
        temp[k++] = ar[p1++];
    while(p2<=hi)
        temp[k++] = ar[p2++];
    for(int i=0; i<hi-lo+1; i++){
        ar[lo+i] = temp[i];
    }
}

void MS(int ar[], int lo, int hi){
    if(lo==hi)
        return;
    int mid = (lo+hi)/2;
    MS(ar, lo, mid);
    MS(ar, mid+1, hi);
    Merge(ar, lo, hi, mid);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n, k, flag=0;
        cin>>n>>k;
        int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        
        int p1=0, p2=n-1;
        while(p1<p2){
            if(ar[p1]+ar[p2] > k)
                p2--;
            else if(ar[p1]+ar[p2] < k)
                p1++;
            else{
                flag = 1;
                break;
            }
        }
        
        if(flag){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
        cout<<endl;
    }
    return 0;
}
