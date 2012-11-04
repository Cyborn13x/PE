flag = [0]*204
primes = []

def ifc(n): return flag[n>>6]&(1<<((n>>1)&31))

def isc(n): flag[n>>6]|=(1<<((n>>1)&31))

def sieve():
    for i in xrange(3, 114, 2):
        if ifc(i) == 0:
            for j in xrange(i*i, 12996, i<<1): isc(j)

def store():
    primes.append(2)
    for i in xrange(3, 1000, 2):
        if ifc(i) == 0: primes.append(i)

def isprime(n):
    if n < 2: return 0
    if n == 2: return 1
    if n & 1 == 0: return 0
    if ifc(n) == 0: return 1
    return 0    

def main():
    sieve()
    store()
    mmax, ret = 0, 0
    for b in primes:
        for a in xrange(-999, 1000, 2):
            n = 1
            while isprime(n*n + a*n + b): n += 1
            if n > mmax: mmax, ret = n, a * b
    print ret

main()
