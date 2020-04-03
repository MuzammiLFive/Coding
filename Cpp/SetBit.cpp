#include<bits/stdc++.h>
using namespace std;

int setBit(long n, int i){
    return (n>>i)&1;
}


int main(){
    cout<<setBit(4,31);
    return 0;
}