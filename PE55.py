def rev(a):
    r = 0
    while a > 0:
        r = r * 10 + a % 10
        a /= 10
    return r;

def ispalin(n):
    if rev(n) == n: return 1
    return 0

def solve():
    c = 0
    for n in xrange(1, 10000):
        a, f = n, 0
        for i in xrange(50):
            s = a + rev(a)
            if ispalin(s):
                f = 1
                break
            a = s
        if f == 0: c += 1
    return c

print solve()
