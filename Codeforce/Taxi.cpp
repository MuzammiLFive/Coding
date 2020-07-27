#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, x, cars=0;
    cin>>N;
    int arr[5] = {0};
    for (int i=1; i<=N; i++) {
        cin>>x;
        arr[x]++;
    }
    // 4
    cars = cars + arr[4];
    // 3
    if (arr[3] >= arr[1]) {
        cars += arr[3];
        arr[1] = 0;
    }
    else {
        cars += arr[3];
        arr[1] = arr[1] - arr[3];
    }
    // 2
    cars += (arr[2]*2)/4;
    x = (arr[2]*2)%4;
    if (x != 0) {
        cars++;
        while (x--) {
            if (arr[1]>0)
                arr[1]--;
        }
    }
    // 1
    cars += arr[1]/4;
    if (arr[1]%4 != 0)
        cars++;
    cout<<cars;
    return 0;
}