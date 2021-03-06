import numpy as np

bs = np.ones(10000010, dtype=bool)
primes = []
def sieve(upperbound):
    _sieve_size = upperbound + 1
    bs[0] = bs[1] = 0;
    for i in range(2, _sieve_size):
        if bs[i]:
            for j in range(i*i, _sieve_size, i):
                bs[j] = 0
            primes.append(i)

def primeFactors(N):
    factors = []
    PF_idx = 0
    PF = primes[PF_idx]
    while PF * PF <= N:
        while N % PF == 0:
            N /= PF
            factors.append(PF)
        PF_idx += 1
        PF = primes[PF_idx]
    if N != 1:
        factors.append(N)
    return factors

sieve(10000000)
x = int(input())
print(primeFactors(x))
