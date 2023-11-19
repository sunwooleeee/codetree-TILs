n,m=map(int,input().split())
arr=list(map(int,input().split()))

def f(arr,m):
    a_sum=0
    while m>1:
        if m%2==0:
            a_sum+=arr[m-1]
            m//=2
        else:
            a_sum+=arr[m-1]
            m-=1
    a_sum+=arr[m-1]
    return a_sum
print(f(arr,m))