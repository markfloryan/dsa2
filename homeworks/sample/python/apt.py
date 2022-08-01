
n = int(input());

p = [];

for i in range(0,n):
	p.append(int(input()))

low = min(p[0],p[1]);
sec = max(p[0],p[1]);

for i in range(2,n):
	if p[i] < low:
	  sec = low
	  low = p[i]
	elif p[i] < sec:
	  sec = p[i];
	


print(sec)
