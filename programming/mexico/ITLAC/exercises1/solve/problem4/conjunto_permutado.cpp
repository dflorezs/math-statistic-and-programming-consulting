#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  //solve
  int n, element;
  bool flag = true;
  cin>>n;
  vector<int> arr1;
  vector<int> arr2;
  //save data
  for (int i = 0; i < n; i++){
      cin>>element;
      arr1.push_back(element);
  }
  for (int i = 0; i < n; i++){
      cin>>element;
      arr2.push_back(element);
  }
  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());
  for (int x:arr1){
       if (bool esta = binary_search(arr2.begin(), arr2.end(), x) == 1) flag = true;
       else if (bool esta = binary_search(arr2.begin(), arr2.end(), x) == 0) flag = false;
  }
 
  if (flag = true) cout<<"SI";
  else cout<<"No";
  return 0;
}