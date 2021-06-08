#include <bits/stdc++.h>
using namespace std;

bitset<10000010> bs;
long long _sieve_size;
vector<int> primes;
void sieve(long long upperbound) { 
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (long long i = 2; i <= _sieve_size; i++)
    if (bs[i]) {
      for (long long j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
      primes.push_back((int) i);
    }
  
}

bool isPrime(long long N) {
	if (N <= _sieve_size) return bs[N];
	for (int i = 0; i < (int)primes.size(); i++)
		if (N % primes[i] == 0) return false;
	return true;
}
 

vector<int> primeFactors(long long N) {
  vector<int> factors;
  long long PF_idx = 0, PF = primes[PF_idx];
  while (PF * PF <= N) {
    while (N % PF ==0) {
      N/= PF;
      factors.push_back(PF);
    }
    PF = primes[++PF_idx];
  }
  if (N != 1) factors.push_back(N);
  return factors;
} 
    
int main () {
  sieve(10000000);
  long long x;
  cin>>x;
  vector<int> r = primeFactors(x);
  for (vector<int>::iterator i = r.begin(); i != r.end(); i++) printf("> %d\n", *i);
  return 0;
}
