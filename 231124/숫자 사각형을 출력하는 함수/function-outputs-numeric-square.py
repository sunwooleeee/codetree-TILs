n=int(input())
for i in range(1,n+1):
    s=i
    for j in range(n):
        print(s,end=" ")
        s+=n
    print("")