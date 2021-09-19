#include<bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  //solve
  int n, pos, m, num, c = 0;
  cin>>n;
  vector<int> arr;
  vector<int> arr_copy;
  //add data
  for (int i = 0; i < n; i++){
      cin>>num;
      arr.push_back(num);
      arr_copy.push_back(num);
  }
  sort(arr.begin(),arr.end());
  pos = (n+1)/2 - 1;
  m = arr[pos];
  for(int x:arr_copy){
      if (m != x) c++;
      else break;
  }
  cout<<m<<" "<<c;
  return 0;
}