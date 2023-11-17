n=int(input())
arr=list(map(int,input().split()))
def f(arr,n):
    for i in range(n):
        if arr[i]<0:
            arr[i]=arr[i]*(-1)
    return arr
print(*f(arr,n))