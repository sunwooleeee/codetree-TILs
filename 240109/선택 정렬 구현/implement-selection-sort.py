n=int(input())
arr=list(map(int,input().split()))

for i in range(n):
    t=i
    TF=False
    for j in range(i,n):
        if arr[t]>arr[j]:
            t=j
            TF=True
    if (TF):
        temp_arr=arr[t]
        arr[t]=arr[i]
        arr[i]=temp_arr
print(*arr)