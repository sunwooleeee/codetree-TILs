n=int(input())
def f(n,s=0):
    if n%2==0:
        s+=1
        return f(n/2,s)
    elif n%2!=0:
        s+=1
        return f(n*3+1,s)
    elif n==1:
        s+=1
        return s
print(f(n,s=0))