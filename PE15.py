def fact(n):
    ret, i = 1, 1
    while(i<=n):
        ret, i = ret * i, i + 1
    return ret

def main():
    a = fact(40)
    b = fact(20)
    print a / (b*b)

main()
