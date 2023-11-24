def f2(a,b):
    if a<b:
        a,b=b,a
    if b==0:
        return a
    return f2(b,a%b)
def f1(a,b):
    return int(a*b/f2(a,b))
a,b=map(int,input().split())
print(f1(a,b))