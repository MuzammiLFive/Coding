#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, a, b, c;
    cin>>N>>a>>b>>c;
    int k = 0, ans = 0, m, n, o;

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N; j++) {
            if ( (N-(a*i)-(b*j) ) % c == 0 ) {
                k = (N-(a*i)-(b*j))/c;
                if ((a*i)+(b*j)+(c*k) <= N && k>=0){
                    ans = max( ans, i+j+k );
                    m = i;
                    n = j;
                    o = k;
                }
            }
        }
    }
    cout<<ans<<endl;
    //cout<<m<<endl;
    //cout<<n<<endl;
    //cout<<o<<endl;
    return 0;
}