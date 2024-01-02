a,b=map(int,input().split())
n=input()
def f1(n,a):
    num=0
    arr=[]
    n=str(n)
    for i in range(len(n)):
        arr.append(int(n[i]))
    for i in arr:
        num=num*a+i
    return(num)
def f2(n,b):
    arr=[]
    while n>=b:
        arr.append(n%b)
        n=n//b
    arr.append(n)
    print(*arr[::-1],sep="")
    return 
f2(f1(n,a),b)