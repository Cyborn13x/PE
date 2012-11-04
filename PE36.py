MAX = 1000000

def nextPalin(n):
    strn = str(n)
    dn = len(strn)
    strn = str(int(strn[:(dn+1)/2]) + 1) + strn[(dn+1)/2:]
    dn = len(strn)
    strl = strn[:(dn+1)/2]
    if dn & 1: strr = ''.join(reversed(strl[:-1]))
    else: strr = ''.join(reversed(strl))
    return int(strl + strr)

def isBinPalin(n):
    bbin = bin(n)
    rbin = ''.join(reversed(bbin))
    if rbin[:-2] == bbin[2:]: return n
    return 0

def main():
    n, ans = 1, 0
    while n < MAX:
        ans += isBinPalin(n)
        n = nextPalin(n)
    print ans

main()
