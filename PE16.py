def calc():
    i=1
    r=1
    while i <= 1000:
        r, i = r * 2, i + 1
    s=0
    while r > 0:
        s = s + r % 10
        r = r / 10
    print s

calc()
