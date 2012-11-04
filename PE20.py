r=1
i=1
while i<=100:
    r = r * i
    i = i + 1

#print r

s=0
while r > 0:
    s = s + r % 10
    r = r / 10

print s
