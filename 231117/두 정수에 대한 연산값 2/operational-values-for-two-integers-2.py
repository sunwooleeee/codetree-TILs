a,b=int(input())
def f(a,b):
    if a>b:
        a=a*2: b=b+10
    else:
        a=a+10; b=b*2
    return (a,b)
print(*f(a,b))