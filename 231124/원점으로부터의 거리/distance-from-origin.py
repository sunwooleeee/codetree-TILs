n=int(input())
class s:
    def __init__(self,x,y,n):
        self.x=x
        self.y=y
        self.n=n
        if x<0:
            if y<0:
                self.d=-x-y
            else:
                self.d=-x+y
        else:
            if y<0:
                self.d=x-y
            else:
                self.d=x+y
    def k(self,num):
        self.num=num
arr=[]
for i in range(1,n+1):
    x,y=map(int,input().split())
    n=i
    arr.append(s(x,y,n))
arr.sort(key=lambda x:x.d)
for i in range(0,n):
    arr[i].k(i+1)
arr.sort(key=lambda x:x.n)
for i in range(n):
    print(arr[i].num)