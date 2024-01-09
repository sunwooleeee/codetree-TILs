n=int(input())
arr=[]
for i in map(int,input().split()):
    arr.append(i)
TF=False
while (TF==False):
    TF=True
    for i in range(n-1):
        if arr[i]>arr[i+1]:
            temp=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=temp
            TF=False
print(*arr)