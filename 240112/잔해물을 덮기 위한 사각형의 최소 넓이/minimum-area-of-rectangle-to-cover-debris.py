x1,y1,x2,y2=map(int,input().split())
xx1,yy1,xx2,yy2=map(int,input().split())
arr=[[0]*2000 for _ in range(2000)]
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=1
for i in range(xx1,xx2):
    for j in range(yy1,yy2):
        arr[i][j]+=2

j_max=0
i_max=0
for i in range(2000):
    cnt=0
    temp=0
    for j in range(2000):
        if arr[i][j]==1:
            cnt+=1
        if (arr[i][j]==3 and cnt>=1):
            temp+=1
        if arr[i][j]==1:
            cnt+=temp
            temp=0
        
    if cnt>j_max:
        j_max=cnt

for j in range(2000):
    cnt=0
    for i in range(2000):
        if arr[i][j]==1:
            cnt+=1
        if (arr[i][j]==3 and cnt>=1):
            temp+=1
        if arr[i][j]==1:
            cnt+=temp
            temp=0
    if cnt>i_max:
        i_max=cnt
print(i_max*j_max)