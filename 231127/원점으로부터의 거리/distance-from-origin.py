n=int(input())
class arr_d:
    def __init__(self,x,y,num):
        self.x=x
        self.y=y
        self.num=num
        if x>0:
            if y>0:
                self.d=x+y
            else:
                self.d=x-y
        else:
            if y>0:
                self.d=-x+y
            else:
                self.d=-x-y
arr=[]
for i in range(1,n+1):
    x,y=map(int,input().split())
    arr.append(arr_d(x,y,i))
arr.sort(key=lambda x:x.d)
for i in range(n):
    print(arr[i].num)