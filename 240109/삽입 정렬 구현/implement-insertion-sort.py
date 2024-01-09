n=int(input())
arr=list(map(int,input().split()))
for i in range(n-1):
    for j in range(i+1,0,-1):
        if arr[j-1]>arr[j]:
            temp=arr[j-1]
            arr[j-1]=arr[j]
            arr[j]=temp
        else:
            break;
print(*arr)