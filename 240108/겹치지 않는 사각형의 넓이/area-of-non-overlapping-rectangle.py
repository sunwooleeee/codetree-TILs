arr=[[0]*2000 for _ in range(2000)]
x1,y1,x2,y2=map(int,input().split())
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=1
x1,y1,x2,y2=map(int,input().split())
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=1
x1,y1,x2,y2=map(int,input().split())
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=3
cnt=0
for x in range(2000):
    for y in range(2000):
        if arr[x][y]==1:
            cnt+=1
print(cnt)