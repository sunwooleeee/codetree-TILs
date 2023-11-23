n=int(input())
arr=[]
class s:
    def __init__(self,h,w,num):
        self.h=h
        self.w=w
        self.num=num
for i in range(1,n+1):
    h,w=list(map(int,input().split()))
    num=i
    arr.append(s(h,w,num))
arr.sort(key=lambda x: (-x.h,-x.w,x.num))
for i in range(n):
    print(arr[i].h,arr[i].w,arr[i].num)