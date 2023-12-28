n,b=map(int,input().split())
if b==4:
    arr=[]
    while n>=4:
        arr.insert(0,n%4)
        n//=4
    arr.insert(0,n)
    print(*arr,sep="")
if b==8:
    arr=[]
    while n>=8:
            arr.insert(0,n%8)
            n//4
    arr.insert(0,n)
    print(*arr,sep="")