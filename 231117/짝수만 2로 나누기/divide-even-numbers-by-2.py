n=int(input())
arr=list(map(int,input().split()))
def f1(n,arr):
    for i in range(n):
        if arr[i]%2==0:
            arr[i]=int(arr[i]/2)
    print(*arr)
f1(n,arr)