n=int(input())
temp=1000
arr=[0 for i in range(-1000,1000)]
for i in range(n):
    x,k=tuple(input().split())
    x=int(x)
    if k=="R":
        arr[temp]+=1
        for j in range(x):
            temp+=1
            arr[temp]+=1
    else:
        arr[temp]+=1
        for j in range(x):
            temp+=1
            arr[temp]+=1
cnt=0
for k in range(1,2000):
    if arr[k-1]<2 and arr[k]>=2:
        idx=k
    elif arr[k-1]>=2 and arr[k]>=2:
        pass
    elif arr[k-1]>=2 and arr[k]<2:
        cnt+=k-1-idx
print(cnt)
for i in range(1,200):

    if arr[i]<2:
        if arr[i-1]<2:
            pass
        elif arr[i-1]>=2:
            cnt+=i-1-temp
    else:
        if arr[i-1]<2:
            temp=i
        elif arr[i-1]>=2:
            pass
print(cnt)