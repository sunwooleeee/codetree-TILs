arr=[[0]*2000 for i in range(2000)]
cnt=0
x1,y1,x2,y2=map(int,input().split())
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=1
x1,y1,x2,y2=map(int,input().split())
for i in range(x1,x2):
    for j in range(y1,y2):
        arr[i][j]+=3
arr_1=[]
for i in range(2000):
    for j in range(2000):
        if arr[i][j]==1:
            arr_1.append([i,j])
value=(arr_1[-1][0]-arr_1[-0][0]+1)*(arr_1[-1][1]-arr_1[0][1]+1)
print(value)