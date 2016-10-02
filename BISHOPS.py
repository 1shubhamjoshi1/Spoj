# your code goes here

while True:
	try:
		n = int(raw_input())
		if(n==0 or n==1):
			print n
		else:
			print 2*n-2
	except:
		break
