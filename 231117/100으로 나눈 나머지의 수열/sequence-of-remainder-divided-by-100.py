a1=2
a2=4
n=int(input())
def f(a1,a2,n):
    if n==1:
        return a1
    if n==2:
        return a2
    else:
        return f(a2,(a1*a2)%100,n-1)
print(f(a1,a2,n))