#include<iostream>

using namespace std;

void merge(int ar[], int lo, int hi, int mid){
    int temp[hi-lo+1], k=0;
    int p1 = lo, p2 = mid+1;
    while(p1<=mid && p2<=hi){
        if(ar[p1] < ar[p2]){
            temp[k++] = ar[p1++];
        }
        else{
            temp[k++] = ar[p2++];
        }
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
    if(lo == hi)
        return;
    int mid = (lo+hi)/2;
    MS(ar, lo, mid);
    MS(ar, mid+1, hi);
    merge(ar, lo, hi, mid);
}

int main(){
    int n;
    cin>>n;
    int ar[n]; //= {3, -1, 9, 15, 6, 7, 12, 27, 5};
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    MS(ar, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}