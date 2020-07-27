#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    string ans = "YES";
    vector<int> luckyNumbers {4, 7, 47, 74, 444, 777, 447, 474, 744, 477, 747, 774};
    int M = N, flag=0;
    while (M!=0) {
        int val = M%10;
        if (val!=7 && val!=4) {
            ans = "NO";
            flag = 1;
        }
        M = M/10;
    }
    if (flag) {
        for (auto c: luckyNumbers) {
            if (N%c == 0) {
                ans = "YES";
            }
        }
    }
    cout<<ans;
    return 0;
}