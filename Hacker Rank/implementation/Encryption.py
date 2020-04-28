#https://www.hackerrank.com/challenges/encryption/problem


from math import sqrt,ceil
s = input().replace(" ","")
n,m= int(sqrt(len(s))),ceil(sqrt(len(s)))
if(n*m<len(s)):
    n+=1
s.ljust(n*m," ")
l = len(s)
for i in range(m):
    for j in range(i,l,m):
        print(s[j],end="")
    print(" ",end="")
