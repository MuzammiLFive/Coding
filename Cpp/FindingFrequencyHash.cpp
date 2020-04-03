#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


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
    unordered_map <long long int, int> m;
    for(int i=0; i<n; i++){
        m[N[i]]++;
    }
    
    for(int i=0; i<q; i++){
        cout<<m[Q[i]]<<endl;
    }
    
    return 0;
}
