class student:
    def __init__(self,h,w,num):
        self.h=h
        self.w=w
        self.num=num
n=int(input())
arr=[]
for i in range(n):
    h,w=tuple(map(int,input().split()))
    num=i+1
    arr.append(student(h,w,num))
arr.sort(key=lambda x:(x.h,-x.w))

for i in range(n):
    print(arr[i].h,arr[i].w,arr[i].num)