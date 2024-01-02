a,b=map(int,input().split())
n=input()
def f1(n,a):
    arr=[]
    num=0
    n=str(n)
    for i in range(len(n)):
        arr.append(int(n[i]))
    for j in arr[::-1]:
        num=num*a+j
    return num
def f2(n,b):
    arr=[]
    while n>=b:
        arr.append(n%b)
        n//=b
    arr.append(n)
    print(*arr[::-1],sep="")
    return
f2(f1(n,a),b)