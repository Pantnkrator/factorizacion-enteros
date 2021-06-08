#include <bits/stdc++.h>
using namespace std;
int main () {
  long double n;
  cin>>n;
  cout<<n<<endl;
  long double x = floor(sqrt(n));
  long double t = (2*x) +1;
  long double r = (x*x)-n;
  cout<<r<<endl;
  while(sqrt(r) != (int)(sqrt(r))) {
    r = r + t;
    t = t + 2;
  }
  x = (t-1)/2;
  long double y = sqrt(r);
  cout<<(x+y)<<" "<<(x-y)<<endl;
  cout<<x<<" "<<y<<endl;
  return 0;
}
