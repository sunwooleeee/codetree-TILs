n=int(input())
arr=[]
for i in range(201):
    arr.append(0)
for i in range(n):
    x1,x2=map(int,input().split())
    x1+=100
    x2+=100
    for j in range(x1,x2):
        arr[j]+=1
print(max(arr))