#https://www.hackerrank.com/challenges/fibonacci-modified/problem
lis = [0]*30
lis[0],lis[1],n = map(int,input().split())
for i in range(2,n+1):lis[i] = lis[i-1]**2 + lis[i-2]
print(lis[n-1])Fibonacci Modified