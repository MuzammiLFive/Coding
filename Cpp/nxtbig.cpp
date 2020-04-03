#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t-- > 0){
	    int n;
	    cin>>n;
	    vector<long long int> arr;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>n;
	        arr.push_back(n);
	    }
	    
	    int slow, fast, flag;
	    for(slow=0; slow<arr.size()-1;slow++){
	        flag = 1;
	        for(fast=slow+1; fast<arr.size(); fast++){
	            if(arr.at(slow)<arr.at(fast)){
	                flag = 0;
	                cout<<arr.at(fast)<<" ";
	                break;
	            }
	        }
	        if(flag==1){
	            cout<<"-1"<<" ";
	        }
	    }
	    cout<<"-1";
	    cout<<endl;
	    arr.clear();
	}
	return 0;
}