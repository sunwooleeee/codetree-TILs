a1=1
a2=2
def a(n):
    if n==1:
        return a1
    elif n==2:
        return a2
    else:
        return a(n//3)+a(n-1)
print(a(int(input())))