def spiralSum(n):
    # n is the side length of grid
    mmax = n**2
    # print mmax
    ret = 1
    add = 2
    last = 1
    while 1:
        for i in xrange(4):
            last = last + add
            if (last > mmax):
                return ret
            ret = ret + last
        add = add + 2
    return -1

print spiralSum(1001)
