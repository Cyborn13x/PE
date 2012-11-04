dp = [ [ 0 ]*101 for x in xrange (101) ]

def solve(n, r):
    global dp
    if (n==r):
        dp[n][r] = 1
    if (r==1):
        dp[n][r] = n
    if (r==0):
        dp[n][r] = 1
    if (dp[n][r]==0):
        dp[n][r] = solve(n-1, r) + solve(n-1, r-1)
    return dp[n][r]

def main():
    lmt = 1000000
    cnt = 0
    for n in xrange (1, 101):
        for r in xrange (n + 1):
            if (solve(n, r) > lmt):
                cnt = cnt + 1
    print cnt

main()
