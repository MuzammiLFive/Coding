#include<iostream>
using namespace std;

int main(){
    string A, B;
    int ans = 0;
    cin>>A>>B;
    for(int i=0; i<A.length(); i++){
        if(A[i]<=90){
            A[i] = A[i] + 32;
        }
        if(B[i]<=90){
            B[i] = B[i] + 32;
        }
        if(A[i]>B[i]){
            ans = 1;
            break;
        }
        if(A[i]<B[i]){
            ans = -1;
            break;
        }
    }
    cout<<ans;
    return 0;
}