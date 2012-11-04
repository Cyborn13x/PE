ans = 0
for a in xrange (1, 100):
    for b in xrange (1, 100):
        c, s = a ** b, 0
        while c > 0: s, c = s + c % 10, c / 10
        if s > ans: ans = s
print ans
