p5 = [x**5 for x in xrange(10)]
r = 0

for n in xrange(2, p5[9]*6):
    s, a = 0, n
    while (a > 0):
        a, m = divmod(a, 10)
        s += p5[m]
    if (s == n):
        r += n

print r
