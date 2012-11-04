def T(n):
    return n*(n+1)/2

def P(n):
    return n*(3*n-1)/2

def H(n):
    return n*(2*n-1)

def find():
    t, p, h = 1, 1, 1
    vt, vp, vh = 0, 0, 0
    c = 0
    while c < 3:
        vt = T(t)
        vp = P(p)
        vh = H(h)
        mn = vt
        if vp < mn: mn = vp
        if vh < mn: mn = vh
        if mn == vt: t += 1
        if mn == vp: p += 1
        if mn == vh: h += 1
        if vt == vp and vp == vh: c += 1
    return vt

print find()
