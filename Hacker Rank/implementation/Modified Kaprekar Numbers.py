#https://www.hackerrank.com/challenges/kaprekar-numbers/problem
f = int(input());e = int(input());
var=0;
if(f<=1 and e>=1):print(1,end=" ");var=1;
if(f<=9 and e>=9):print(9,end=" ");var=1;
for i in range(max(f,45),e+1):
    s = str(i**2)
    ans=(i)-(int(s[0:len(s)//2]) + int(s[len(s)//2:]) )
    if(ans==0):print(i,end=" ");var=1;

if(not var):
    print('INVALID RANGE');
