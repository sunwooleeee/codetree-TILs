n=int(input())-1
arr=list(map(int,input().split()))

def f2(a,b): #두 수의 최대공약수 계산
    if a<b:
        a,b=b,a
    if b==0:
        return a
    else:
        return f2(b,a%b)

def f1(a,b): # 두 수의 최소공배수 계싼
    return a*b//f2(a,b)

def f(arr,n,c):
    
    if n==1:
        
        return c


    else:
        
        return f(arr,n-1,f1(arr[n-1],c))
c=f1(arr[n-1],arr[n])        
print(f(arr,n,c))