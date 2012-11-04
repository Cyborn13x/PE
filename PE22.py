fp = open("files\\names.txt", "r")
s = sorted(fp.read().split(','))
total = 0
for i in xrange(len(s)):
    val, j = 0, 0
    for ch in s[i]:
        if ch != '"':
            val = val + ord(ch) - 65 + 1
            j = j + 1
    total = total + val * (i + 1)
print total

