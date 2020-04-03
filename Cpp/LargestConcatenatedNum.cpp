#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Merge(int ar[], int lo, int mid, int hi);

void MS(int ar[], int lo, int hi){
    if(lo==hi){
        return;
    }
    int mid = (lo+hi)/2;
    MS(ar, lo, mid);
    MS(ar, mid+1, hi);
    Merge(ar, lo, mid, hi);
}

void Merge(int ar[], int lo, int mid, int hi){
    int temp[hi-lo+1], k=0;
    int p1=lo, p2=mid+1;
    while(p1<=mid && p2<=hi){
        if(ar[p1] < ar[p2]){
            temp[k++] = ar[p1++];
        }
        else{
            temp[k++] = ar[p2++];
        }
    }
    //copy remaining elements of left array if any
    while(p1<=mid)
        temp[k++] = ar[p1++];
    //copy remaining elements of right array if any
    while(p2<=hi)
        temp[k++] = ar[p2++];
    //copy temp to ar
    for(int i=0; i<hi-lo+1; i++)
        ar[lo+i] = temp[i];
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int ar[N];
        for(int i=0; i<N; i++){
            cin>>ar[i];
        }
        
        //sort the array
        MS(ar, 0, N-1);
        // ULLONG_MAX
        for(int i=0; i<N; i++){
            
        }
            
        
    }
    return 0;
}
