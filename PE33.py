def isvalid(i, j):
    a, b = str(i), str(j)
    for x in xrange(2):
        for y in xrange(2):
            if a[x]==b[y] and a[x]!='0':
                p = ord(a[1-x])-48
                q = ord(b[1-y])-48
                if i*q == j*p: return True
    return False

def gcd(a, b):
    if b: return gcd(b, a%b)
    return a

def main():
    h, l = 1, 1
    for i in xrange(10,99):
        for j in xrange(i+1, 100):
            if isvalid(i, j):
                l *= i
                h *= j
    g = gcd(h, l)
    print h/g

if __name__=="__main__": main()
