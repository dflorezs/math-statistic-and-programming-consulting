#include <iostream>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  //solve
  char input;
  int ans = 0;
  do{
    cin>>input;
    if (input == 'A') ans++;
   
  }while (input != '.');
  cout<<ans;
  return 0;
}