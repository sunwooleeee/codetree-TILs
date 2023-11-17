a,b=map(int,input().split())
def f(a,b):
    if b>a:
        a,b=b,a
    a+=25; b*=2
    return [b,a]
print(*f(a,b))