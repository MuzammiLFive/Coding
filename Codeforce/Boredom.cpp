#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int N;
    cin>>N;
    long long int cnt[100001];
    memset(cnt, 0, sizeof(cnt));
    for (int i=0; i<N; i++) {
        int x;
        cin>>x;
        cnt[x]++;
    }
    long long int f[100001];
    f[0] = 0;
    f[1] = cnt[1];
    for (int i=2; i<=100000; i++) {
        f[i] = max(f[i-1], (long long)f[i-2]+(cnt[i]*i));
    }
    cout<<f[100000]<<endl;
    return 0;
}