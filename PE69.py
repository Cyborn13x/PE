primes = [2,3,5,7,11,13,17,19,23,27,31,37,41]
L = 1000000
maxv = 1
for p in primes:
    if maxv*p > L: break
    maxv *= p
print maxv
