# https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays


"""
the idea is very simple for example 
a = [1,2,3,4,5] , d = 3
first part : [4,5] == a[d:]
second part : [1,2,3] == a[0:d]

"""


n,d = map(int,input().split())

a = list(map(int, input().rstrip().split()))

print(" ".join(map(str,(a[d:] + a[0:d]))))

