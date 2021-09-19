#include<bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  //solve
  int n, num;
  cin>>n;
  vector<int> arr1;
  vector<int> arr2;
  vector<int> arr3;
  vector<int> ans;
  set<int> s;
  //save data vector
  int c = 0;
  while (c < 3){
       if (c == 0){
           for (int i = 0; i < n; i++){
               cin>>num;
               arr1.push_back(num);
           }
           c++;
       }else if (c == 1){
           for (int i = 0; i < n; i++){
               cin>>num;
               arr2.push_back(num);
           }
           c++;
       }else if (c == 2){
           for (int i = 0; i < n; i++){
               cin>>num;
               arr3.push_back(num);
           }
           c++;
       }
  }
  sort(arr2.begin(), arr2.end());
  sort(arr3.begin(), arr3.end());

  //validate
  for (int x : arr1){
      bool esta_in_arr2 = binary_search(arr2.begin(),arr2.end(),x);
      bool esta_in_arr3 = binary_search(arr3.begin(),arr3.end(),x);
      if (esta_in_arr2 == 1 && esta_in_arr3 == 1) s.insert(x);
  }
  
  for (int x:s){
      if (s.count(x) == 1) ans.push_back(x);
  }

  sort(ans.begin(), ans.end());

  for (int i = 0; i < ans.size(); i++) cout<<ans[i]<<" ";
  return 0;
}