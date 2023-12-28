n=int(input())
arr=[]
while n>=2:
    arr.insert(0,n%2)
    n=n//2
arr.insert(0,n)
print(*arr,sep="")