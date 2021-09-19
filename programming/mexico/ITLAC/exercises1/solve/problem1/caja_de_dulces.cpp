#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

 //solve
  int n, k, num, suma = 0, c = 0, max;
  vector<int> arr;
  vector<int> ans;
  cin>>n>>k;
  //save data vector
  for (int i = 0; i < n; i++){
    cin>>num;
    arr.push_back(num);
  }
  //sum in groups of k
  for (int i = 0; i < n-k+1; i++){
      int j = i;
      while (c < k){
        suma += arr[j];
        c++;
        j++;
      }
      ans.push_back(suma);
      suma = 0;
      c = 0;
  }
  //search for the maximum number of candies and print out
  max = ans[0];
  for (int i = 0; i < ans.size(); i++){
    if (max < ans[i]) max = ans[i];
  }
  cout<<max;
  return 0;
}

