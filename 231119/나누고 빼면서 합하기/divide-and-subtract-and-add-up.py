n,m=map(int,input().split())
arr=list(map(int,input().split()))

def f(arr,m):
    a_sum=arr[m]
    while m>1:
        if m%2==0:
            m/=2
            a_sum+=arr[m]
        else:
            m-=1
            a_sum+=arr[m]
    a_sum+=arr[m]
    return a_sum
print(f(arr,m))