n=int(input())
arr=list(map(int,input().split()))
import sys

min_value=sys.maxsize
for k in range(n):
    sum_dif=0
    for j in range(n):
        sum_dif+=arr[j]*abs(k-j)
    min_value=min(min_value,sum_dif)
print(min_value)