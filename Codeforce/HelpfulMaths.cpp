#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[100], j=0;
    for(int i=0; i<str.length(); i=i+2){
        arr[j] = str[i] - '0';
        j++;
    }
    int i=0;
    sort(arr, arr+j);
    while(i<j){
        cout<<arr[i];
        i++;
        if(i!=j){
            cout<<"+";
        }
    }
    return 0;
}