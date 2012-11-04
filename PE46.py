import math

def isprime(n):
    if n < 2: return False
    if n == 2: return True
    if (n & 1) == 0: return False
    rt = int(math.sqrt(n))
    for i in xrange(3, rt+1, 2):
        if n % i == 0: return False
    return True

def main():
    n = 3
    while 1:
        if isprime(n)==False:
            i, f = 1, 1
            while n > 2*i*i:
                if isprime(n-2*i*i):
                    f = 0
                    break;
                i += 1
            if f: break;
        n += 2
    print n

if __name__ == '__main__' : main()
