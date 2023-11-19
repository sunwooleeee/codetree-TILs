n,m=map(int,input().split())
an=list(map(int,input().split()))
for i in range(m):
    x,y=map(int,input().split())
    sum=0
    for j in range(x-1,y):
        sum+=an[j]
    print(sum)