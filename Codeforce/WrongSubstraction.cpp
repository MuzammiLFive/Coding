#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin>>n>>d;
    while (d--) {
        if (n%10 == 0) {
            n = n/10;
        }
        else {
            n = n-1;
        }
    }
    cout<<n<<endl;
    return 0;
}