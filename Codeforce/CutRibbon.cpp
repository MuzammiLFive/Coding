#include <iostream>
#include <climits>
using namespace std;

int dp(int N, int a, int b, int c) {
    if ( N==0 )
        return 0;
    if (N<0)
        return INT_MIN;
    return (1 + max(dp(N-a, a, b, c), max(dp(N-b, a, b, c), dp(N-c, a, b, c) )));
}

int main() {
    int N, a, b, c;
    cin>>N>>a>>b>>c;
    cout<<dp(N, a, b, c)<<endl;
    return 0;
}