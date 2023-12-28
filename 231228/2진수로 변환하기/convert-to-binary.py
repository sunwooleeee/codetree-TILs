n=int(input())
arr=[]
def f(n,arr):
    if n==0:
        print(0)
        return
    if n==1:
        arr.insert(0,1)
        n=len(arr)
        for i in range(n):
            print(arr[i],end="")
        return 
    arr.insert(0,n%2)
    n=n//2
    f(n,arr)

f(n,arr)