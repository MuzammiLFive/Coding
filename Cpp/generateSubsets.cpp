#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> v;
    for(int i=0; i<=(1<<A.size())-1; i++){
        vector<int> x;
        
        for(int j=0; j<=A.size(); j++){
            if((i>>j)&1){
                x.push_back(A[j]);
            }
        }
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    return v;
}

int main(){
    vector<vector<int>> x;
    
    return 0;
}