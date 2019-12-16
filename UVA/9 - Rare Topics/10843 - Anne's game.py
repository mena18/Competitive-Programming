n = int(input())
i=1
while(n):
	n-=1
	k = int(input());ans=0
	if(k==1 or k==2):
		ans=1
	else:
		ans = (k**(k-2)) % 2000000011

	print("Case #{}: {}".format(i,ans))
	i+=1