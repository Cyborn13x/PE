for x in xrange(1, 1000000):
	cnt = [0]*10
	p = x
	while p > 0:
		cnt[p%10] += 1
		p /= 10
	p = 2 * x
	tmp = [0]*10
	while p > 0:
		tmp[p%10] += 1
		p /= 10
	flag = 0
	for i in xrange(10):
		if cnt[i] != tmp[i]:
			flag = 1
			break
	if flag == 1: continue
	p = 3 * x
	tmp = [0]*10
	while p > 0:
		tmp[p%10] += 1
		p /= 10
	flag = 0
	for i in xrange(10):
		if cnt[i] != tmp[i]:
			flag = 1
			break
	if flag == 1: continue
	p = 4 * x
	tmp = [0]*10
	while p > 0:
		tmp[p%10] += 1
		p /= 10
	flag = 0
	for i in xrange(10):
		if cnt[i] != tmp[i]:
			flag = 1
			break
	if flag == 1: continue
	p = 5 * x
	tmp = [0]*10
	while p > 0:
		tmp[p%10] += 1
		p /= 10
	flag = 0
	for i in xrange(10):
		if cnt[i] != tmp[i]:
			flag = 1
			break
	if flag == 1: continue
	p = 6 * x
	tmp = [0]*10
	while p > 0:
		tmp[p%10] += 1
		p /= 10
	flag = 0
	for i in xrange(10):
		if cnt[i] != tmp[i]:
			flag = 1
			break
	if flag == 1: continue
	print x
	break
