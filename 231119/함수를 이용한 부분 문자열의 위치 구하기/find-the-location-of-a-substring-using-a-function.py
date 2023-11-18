a=input()
b=input()

def f(a,b):
    n=len(a)
    m=len(b)
    for i in range(n-m+1):
        if a[i:i+m]==b:
            return i
    return -1
print(f(a,b))