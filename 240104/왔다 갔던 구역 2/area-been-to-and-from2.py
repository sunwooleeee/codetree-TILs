n=int(input())
arr=[0 for i in range(1001)]
temp=501
for i in range(n):
    x,y=tuple(input().split())
    x=int(x)
    if y=='R':
        arr[temp]+=1
        for j in range(x):
            temp+=1
            arr[temp]+=1
    else:
        arr[temp]+=1
        for j in range(x):
            temp-=1
            arr[temp]+=1
cnt=0
for i in range(1,1001):

    if arr[i]<2:
        if arr[i-1]<2:
            pass
        elif arr[i-1]>=2:
            cnt+=i-1-idx
    else:
        if arr[i-1]<2:
            idx=i
        elif arr[i-1]>=2:
            pass
print(cnt)