def bpm(b, p, m):
    r = 1
    while(p > 0):
        if(p % 2 == 1):
            r = (r * b) % m
        p = p / 2
        b = (b * b) % m
    return r

def main():
    print ((28433 * bpm(2, 7830457, 10000000000))%10000000000 + 1) % 10000000000

main()
