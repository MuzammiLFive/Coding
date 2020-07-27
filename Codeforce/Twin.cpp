#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N], sum = 0;
    for (int i=0; i<N; i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr, arr+N, greater<int>());
    int mysum = 0, i=0;
    while (mysum <= sum) {
        mysum += arr[i];
        sum = sum-arr[i];
        i++;
    }
    cout<<i<<endl;
    return 0;
}