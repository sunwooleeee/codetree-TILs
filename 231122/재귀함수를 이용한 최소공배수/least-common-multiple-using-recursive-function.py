n=int(input())
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

def f(arr):
    if len(arr)==1:
        return arr
    arr.append(f1(arr.pop(-1),arr.pop(-1)))
    return f(arr)
print(*f(arr))