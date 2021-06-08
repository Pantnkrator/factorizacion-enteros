#include <bits/stdc++.h>
using namespace std;

bitset<10000010> bs;
long long _sieve_size;
void sieve(long long upperbound) { 
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (long long i = 2; i <= _sieve_size; i++)
    if (bs[i])
      for (long long j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
}

int main () {
  sieve(10000000);
  cout<<bs[10009]<<endl;
  return 0;
}

