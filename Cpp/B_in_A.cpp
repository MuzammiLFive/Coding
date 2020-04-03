#include<iostream>
using namespace std;


int main(){
    string A, B;
    cin>>A>>B;
    int N, M, prime1=7, prime2=13, lp1=prime1, lp2=prime2, tp1=prime1, tp2=prime2;
    int Mo = 1e9+7;
    N = A.size();
    M = B.size();
    int hashA1=0, hashA2=0, hashB1=0, hashB2=0;
    for(int i=0; i<M; i++){
        hashA1 = hashA1 + A[i]*lp1;
        hashA2 = hashA2 + A[i]*lp2;
        hashB1 = hashB1 + B[i]*lp1;
        hashB2 = hashB2 + B[i]*lp2;
        
        lp1 = (lp1*prime1) % Mo;
        lp2 = (lp2*prime2) % Mo;
    }

    if(hashA1 == hashB1 && hashA2 == hashB2){
        cout<<"Yes";
        return 0;
    }
    for(int i=M; i<N; i++){
        hashB1 = hashB1 * prime1;
        hashB2 = hashB2 * prime2;

        hashA1 = hashA1 - A[i-M]*tp1 + A[i]*lp1;
        hashA2 = hashA2 - A[i-M]*tp2 + A[i]*lp2;

        if(hashA1 == hashB1 || hashA2 == hashB2){
            cout<<"Yes";
            return 0;
        }
        tp1 = (tp1*prime1) % Mo;
        tp2 = (tp2*prime2) % Mo;
        lp1 = (lp1*prime1) % Mo;
        lp2 = (lp2*prime2) % Mo;
    }
    cout<<"No";
    return 0;
}

// A: axyybayxabbxa
// B: byaax