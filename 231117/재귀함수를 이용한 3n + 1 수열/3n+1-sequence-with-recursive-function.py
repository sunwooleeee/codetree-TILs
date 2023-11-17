n=int(input())
def f(n,s):
    if n==1:
        return s
    elif n%2==0:
        s+=1
        return f(n/2,s)
    elif n%2!=0:
        s+=1
        return f(n*3+1,s)
s=0
print(f(n,s))