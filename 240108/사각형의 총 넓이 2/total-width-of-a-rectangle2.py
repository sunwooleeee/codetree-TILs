n=int(input())
arr=[]
for j in range(200):
    arr.append([0 for k in range(200)])
for i in range(n):
    x1,y1,x2,y2=map(int,input().split())
    x1+=100
    x2+=100
    y1+=100
    y2+=100
    for q in range(x1,x2):
        for p in range(y1,y2):
            arr[q][p]+=1
cnt=0
for x in range(200):
    for y in range(200):
        if arr[x][y]>=1:
            cnt+=1
print(cnt)