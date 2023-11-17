a,b,c=map(int,input().split())
n=a*b*c
sum=0
def f2(n,sum):
        if n<=9:
            sum+=n
            return sum
        if n>=10:
            sum+=n%10
            n=n//10
            return f2(n,sum)
print(f2(n,sum))