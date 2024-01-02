def f1(n):
    num=0
    arr=[]
    while n>=2:
        arr.append(n-(n//10)*10)
        n=n//10

    arr.append(n)

    for i in arr[::-1]:
        num=num*2+i
    return num
def f2(n):
    arr=[]
    while n>=2:
        arr.append(n%2)
        n//=2
    arr.append(n)
    print(*arr[::-1],sep="")
    return  
n=int(input())
f2(f1(n)*17)