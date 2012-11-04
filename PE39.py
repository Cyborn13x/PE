cnt = [0]*1001

for a in xrange(1, 1000):
    for b in xrange(a + 1, 1001):
        csq = a * a + b * b
        c = int(pow(csq, 0.5))
        if a + b + c > 1000: break
        if c * c == csq and a + b + c <= 1000: cnt[a + b + c] += 1

ret, idx = 0, 0
for i in xrange(1, 1001):
    if cnt[i] > ret: ret, idx = cnt[i], i

print idx
