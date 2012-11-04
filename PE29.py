"""
def find(a, b):
    res = 0
    flag = [[0]*(b+1) for x in xrange(a+1)]
    for n in xrange(2, a+1):
        for p in xrange(2, b+1):
            if (flag[n][p]):
                continue
            res += 1
            i, d = n, 1
            while (i <= a and p > d):
                if (p % d == 0):
                    flag[i][p/d] = 1
                i *= n
                d += 1
    return res

print find(100, 100)
"""
s = set()
for a in range(2, 101):
    for b in range(2, 101):
        s.add(a**b)
print len(s);
