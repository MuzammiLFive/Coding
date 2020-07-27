#include <iostream>
using namespace std;

int main() {
    int distance;
    cin>>distance;
    int steps=0;
    int a = distance/5;
    distance = distance%5;
    int b = distance/4;
    distance = distance%4;
    int c = distance/3;
    distance = distance%3;
    int d = distance/2;
    distance = distance%2;
    int e = distance/1;
    steps = a+b+c+d+e;
    cout<<steps<<endl;
    return 0;
}