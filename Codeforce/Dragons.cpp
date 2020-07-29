#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int s, n;
  cin>>s>>n;
  vector<pair<int,int>> vec;
  while (n--) {
    int x, y;
    cin>>x>>y;
    vec.push_back(make_pair(x, y));
  }
  sort(vec.begin(), vec.end());
  string ans = "YES";
  
  for (auto itr=vec.begin(); itr!=vec.end(); itr++) {
    if (s <= itr->first) {
      ans = "NO";
      break;
    }
    else {
      s = s + itr->second;
    }
  }
  cout<<ans<<endl;
  return 0;
}