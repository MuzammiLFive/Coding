#include<iostream>
using namespace std;

int main(){
    int n, x=0;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str == "X++" || str == "++X"){
            x++;
        }
        else if(str == "--X" || str == "X--"){
            x--;
        }
    }
    cout<<x;
    return 0;
}