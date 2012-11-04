def d(n):
    i = 2
    s = 0
    while (i*i <= n):
        if (n%i == 0):
            if (i*i == n):
                s = s + i
            else :
                s = s + i + n/i
        i = i+1
    return s+1

def calc():
    i = 1
    s = 0
    while (i < 10000):
        a = d(i)
        if (a != i and d(a) == i):
            s = s + a + i
        i = i + 1
    print s / 2

calc()
