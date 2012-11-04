def divsum(n):
    sum = 1
    for d in xrange(2, int(pow(n, 0.5))+1):
        if (n % d == 0):
            p = n / d
            if (p != d):
                sum = sum + p
            sum = sum + d
    return sum

def main():
    lb, ub = 12, 28124
    L = []
    for i in xrange(lb, ub):
        d = divsum(i)
        if (d > i):
            L.append(i)
    flag = [0 for i in xrange(ub)]
    for i in xrange(len(L)):
        for j in xrange(i, len(L)):
            s = L[i] + L[j]
            if (s < ub):
                flag[s] = 1
    s = 0
    for i in xrange(ub):
        if (flag[i] == 0):
            s = s + i
    print s

main()
