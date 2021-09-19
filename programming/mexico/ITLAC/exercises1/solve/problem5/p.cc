#include<bits/stdc++.h>
using namespace std;
//function
int fibo(int pos, int c);

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int c = 0;
  int f = fibo(2, c);
  cout<<f;



  return 0;
}

int fibo(int pos, int c){
    if (pos > 1){
        c +=2;
        return fibo (pos-1, c) + fibo(pos-2, c);

    }else if (pos ==0){
        c+=1;
        return 0;
    }else if (pos==1){
        c+=1;
        return 1;
    }
    cout<<c;
}