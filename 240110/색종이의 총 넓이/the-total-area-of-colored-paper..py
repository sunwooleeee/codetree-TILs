n=int(input())
arr=[[0]*200 for i in range(200) ]
for j in range(n):
    x,y=map(int,input().split())
    for a in range(x,x+8):
        for b in range(y,y+8):
            arr[a][b]+=1
cnt=0
for x in range(200):
    for y in range(200):
        if arr[x][y]>=1:
            cnt+=1
print(cnt)