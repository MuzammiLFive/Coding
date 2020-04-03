#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n]; //= {3, -1, 9, 15, 6, 7, 12, 27, 5};
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    //MS(ar, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}