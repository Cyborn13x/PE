def sieve():
    MAX = 1024
    LMT = 32
    flag = [0]*MAX
    primes = [2]
    for i in xrange(3, MAX, 2):
        if (flag[i]==0):
            primes.append(i)
            if (i < LMT):
                k = i * 2
                j = i * i
                while (j < MAX):
                    flag[j] = 1
                    j = j + k
    return primes

def solve(n):
    primes = sieve()
    maxlen, maxprime = 1, -1
    for i in xrange(len(primes)-1, -1, -1):
        if (primes[i] >= n):
            continue
        digit = 1
        cycle = 0
        while (1):
            while (digit < primes[i]):
                digit = digit * 10
            digit = digit % primes[i]
            if (digit == 0):
                break
            cycle = cycle + 1
            if (cycle > maxlen):
                maxlen = cycle
                maxprime = primes[i]
            if (digit == 1):
                break
    return maxprime

print solve(1000)
