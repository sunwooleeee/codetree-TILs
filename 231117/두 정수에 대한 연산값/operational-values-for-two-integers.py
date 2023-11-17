a,b=map(int,input().split())
def f(a,b):
    if b>a:
        a*=2; b+=25
    else:
        a+=25; b*=2
    return [a,b]
print(*f(a,b))