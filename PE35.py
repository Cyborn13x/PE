MAX = 1000000
LMT = 1000
flag = [0]*15626
primes = []

def ifc(x): return flag[x>>6]&(1<<((x>>1)&31))

def isc(x): flag[x>>6]|=(1<<((x>>1)&31))

def sieve():
    primes.append(2)
    for i in xrange(3, MAX, 2):
        if ifc(i)==0:
            primes.append(i)
            if i>=LMT: continue
            for j in xrange(i*i, MAX, i<<1): isc(j)

def isprm(n):
    if n<2: return 0
    if n==2: return 1
    if n&1==0: return 0
    if ifc(n)==0:return 1
    return 0

def main():
    sieve()
    cnt = 0
    for p in primes:
        rot, flag = len(str(p)), 0
        for k in xrange(rot-1):
            p, lst = divmod(p, 10)
            lst *= 10**(rot-1)
            p += lst
            if isprm(p)==0:
                flag = 1
                break
        if flag == 0: cnt += 1
    print cnt

main()
            
