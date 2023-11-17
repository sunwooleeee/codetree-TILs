a=input()
def f(a):
    n=len(a)
    if n%2==0:
        for i in range(n):
            if a[i]==a[n-1-i]:
                pass
            else:
                return False
            return True
    elif n==1:
        return True
    else:
        m=int(n/2)
        for i in range(m):
            if a[i]==a[n-1-i]:
                pass
            else:
                return False
            return True

if f(a):
    print("Yes")
else:
    print("No")