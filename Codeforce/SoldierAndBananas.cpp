#include <iostream>
using namespace std;

int main() {
    int quantity;
    long long int initial, budget, totalCost = 0;
    cin>>initial>>budget>>quantity;

    for (int i=1; i<=quantity; i++) {
        totalCost += i*initial;
    }
    if (budget >= totalCost)
        cout<<"0";
    else
        cout<<totalCost-budget;
    cout<<endl;
    return 0;
}