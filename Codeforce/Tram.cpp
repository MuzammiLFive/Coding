#include <iostream>
#include <climits>
using namespace std;

int main() {
    int stops;
    cin>>stops;
    int count=0, atMax=INT_MIN;
    while (stops--) {
        int in, out;
        cin>>out>>in;
        count = count - out;
        count = count + in;
        atMax = max(atMax, count);
    }
    cout<<atMax<<endl; //
    return 0;
}