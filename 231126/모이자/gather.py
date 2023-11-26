n=int(input())
arr=list(map(int,input().split()))
min_value=999999999999999999999999999999999999
for k in range(n):
    sum_dif=0
    for j in range(n):
        sum_dif+=arr[j]*abs(k-j)
    min_value=min(min_value,sum_dif)
print(min_value)