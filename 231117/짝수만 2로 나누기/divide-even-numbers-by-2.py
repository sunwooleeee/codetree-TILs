n=int(input())
arr=list(map(int,input().split()))
def f1(arr,n):
    for i in n:
        if arr[i]%2==0:
            arr[i]/2
    print(*arr)
f1(arr,n)