//abc153

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int h,a;
  cin >> h >> a;
  int count = 0;

  while(h > 0){
    h -= a;
    count ++;
  }

  cout << count <<endl;


}
