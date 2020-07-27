#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    unsigned long long int N;
    cin>>N;
    vector<int> luckyNumbers {4, 7, 47, 74, 444, 777, 447, 474, 744, 477, 747, 774};
    string ans = "NO";
    int flag=0, digits=0;
    unsigned long long int M = N;
    while (M!=0) {
        int val = M%10;
        if (val!=7 && val!=4) {
            //ans = "NO";
            flag = 1;
        }
        else {
            digits++;
        }
        M = M/10;
    }
    if (1) {
        for (auto c: luckyNumbers) {
            if (digits == c) {
                ans = "YES";
            }
        }
    }
    cout<<ans;
    return 0;
}