#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    string str;
    cin>>str;
    while (t--) {
        int arr[str.size()] = {0};
        for (int i=str.size()-2; i>=0; i--) {
            if (str[i]==66 && str[i+1]==71 && arr[i+1]==0) {
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
                arr[i] = 1;
                arr[i+1] = 1;
            }
        }
    }
    cout<<str;
    return 0;
}