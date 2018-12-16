def fib(n):
	if n is 1:
		return 1
	return fib(n-1) * n;

n = int(input())
while n > 0:
	x = int(input())
	print(fib(x))
	n-=1
