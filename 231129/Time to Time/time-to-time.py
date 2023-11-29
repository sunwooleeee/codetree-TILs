a,b,c,d=map(int,input().split())
def f(a,b,c,d):
    h=c-a
    if d>b:
        m=d-b
    else:
        h-=1
        d+=60
        m=d-b
    m=m+60*h
    return m
print(f(a,b,c,d))