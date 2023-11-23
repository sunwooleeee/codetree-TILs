class s:
    def __init__(self,name,h,w):
        self.name=name
        self.h=h
        self.w=w
arr=[]
n=int(input())
for i in range(n):
    name,h,w=tuple(input().split())
    arr.append(s(name,int(h),int(w)))

arr.sort(key=lambda x:(x.h,-x.w))


for i in range(n):
    print(arr[i].name,arr[i].h,arr[i].w)