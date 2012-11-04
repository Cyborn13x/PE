def bpm(b, p, m):
    r = 1
    while(p > 0):
        if(p % 2 == 1):
            r = (r * b) % m
        p = p / 2
        b = (b * b) % m
    return r

def calc(n):
    i = 1
    r = 0
    while(i<=n):
        r = r + bpm(i, i, 10000000000)
        r = r % 10000000000
        i = i + 1
    return r

print calc(1000)
