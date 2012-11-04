s = ''
a = 0
while len(s) <= 1000000:
    s += str(a)
    a += 1

m = 1
a = 1
while a <= 1000000:
    m *= ord(s[a])-48
    a *= 10
print m
