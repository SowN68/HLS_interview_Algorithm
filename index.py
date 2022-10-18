import math
import os

def miniMaxSum(arr):
    arr.sort()
    minSum = sum(arr)-arr[-1]
    maxSum = sum(arr)-arr[0]
    print(minSum, maxSum)


arr = list(map(int, input().split()))

miniMaxSum(arr)
