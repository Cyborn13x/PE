def collatz (n):
    count = 1
    while (n!=1):
        count = count + 1
        if (n%2==0):
            n = n/2
        else :
            n = 3*n + 1
    return count

def main ():
    _max = 0
    n = 0
    i = 1
    while (i < 1000000):
        count = collatz(i)
        if (count > _max):
            _max = count
            n = i
        i = i + 1
    print n

main()
