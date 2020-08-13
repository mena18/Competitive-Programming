# https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=arrays


"""

the basic idea is to find the smallets number then swap it with the elemnt in index 0 and then find the second smallest number and swap
it with index 1 and so on but the problem is that this solution is O(n^2)  

a better solution is to first sort the array O( n*log(n) ) so now you know the actual indices for each elemnt and now you can just loop over the original array and for each elemnt you find you will swape it with it's index after sorting which you can get from the sorted array by using binary search or using a map(hash table) to store all numbers and it's indices since all numbers are different.


"""


import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    arr2 = sorted(arr)

    m={}

    for index,num in enumerate(arr2):
        m[num]=index
    
    
    i=0
    n=len(arr)
    swaps=0
    while(i<n):
        new_index=m[arr[i]]
        if(new_index==i):
            i+=1
        else:
            arr[i],arr[new_index] = arr[new_index],arr[i]
            swaps+=1
    
    return swaps
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()




