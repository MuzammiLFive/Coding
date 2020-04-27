#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node (int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node *insert(Node *root, int x){
    if(root==NULL)
        return new Node(x);
    else{
        if(x<root->data)
            root->left = insert(root->left, x);
        else
            root->right = insert(root->right, x);
    }
    return root;
}

void levelOrder(Node *root, map<int, vector<int>> &m, int l){
    if(root==NULL) return;
    
    m[l].push_back(root->data);
    levelOrder(root->left, m, l+1);
    levelOrder(root->right, m, l+1);
    return;    
}

int maxDepth(Node* A) {
    if(A==NULL)
        return 0;
    int x, y;
    x = maxDepth(A->left);
    y = maxDepth(A->right);
    return max(x,y)+1;
}

int minDepth(Node* A) { // shortest distance to a leaf node
    if(!A) return 0;
    if((!A->left) && (!A->right))
        return 1;
    int x=INT_MAX, y=INT_MAX;
    if(A->left)
        x = minDepth(A->left);
    if(A->right)
        y = minDepth(A->right);
    return min(x,y)+1;
}

void zigZagLevelOrder(Node *root){
    map<int, vector<int>> m;
    levelOrder(root, m, 1);

    for(int i=1; i<=m.size(); i++){
        if((i&1) == 0){
            for(int j=0; j<m[i].size(); j++){
                cout<<m[i][j]<<" ";
            }
        }
        else{
            for(int j=m[i].size()-1; j>=0; j--){
                cout<<m[i][j]<<" ";
            }
        }
    }
}

void BottomUpLevelOrder(Node *root){
    map<int, vector<int>> m;
    levelOrder(root, m, 1);

    for(int i=m.size(); i>=0; i--){
        for(int j=0; j<m[i].size(); j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void BottomUpZigZag(Node *root){
    map<int, vector<int>> m;
    levelOrder(root, m, 1);

    for(int i=m.size(); i>0; i--){
        if((i&1) == 0){
            for(int j=0; j<m[i].size(); j++){
                cout<<m[i][j]<<" ";
            }
        }
        else{
            for(int j=m[i].size()-1; j>=0; j--){
                cout<<m[i][j]<<" ";
            }
        }
    }
}

pair<int, int> Diameter(Node* root){
    if(root==NULL){
        return {0, 0};
    }
    pair<int, int> x, y;
    x = Diameter(root->left);
    y = Diameter(root->right);
    
    int diameter = max(max(x.first, y.first), x.second + y.second);
    
    return {diameter, max(x.second, y.second)+1};
}

void leftView(Node *root){
    map<int, vector<int>> m;
    levelOrder(root, m, 1);
    for(auto i=1; i<=m.size(); i++){
        cout<<m[i][0]<<" ";
    }
}

void rightView(Node *root){
    map<int, vector<int>> m;
    levelOrder(root, m, 1);
    for(auto i=1; i<=m.size(); i++){
        //reverse(m[i].begin(), m[i].end());
        cout<<m[i].back()<<" ";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int N, x;
        cin>>N;
        Node *tree = NULL;
        for(int i=0; i<N; i++){
            cin>>x;
            tree = insert(tree, x);
        }
        // Call the function to solve the problem
        cout<<endl;
    }
    return 0;
}