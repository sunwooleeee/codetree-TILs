class info:
    def __init__(self,name,num,location):
        self.name=name
        self.num=num
        self.location=location
n=int(input())
arr=[]
for i in range(n):
    name,num,location=tuple(input().split())
    arr.append(info(name,num,location))
arr.sort(key=lambda x:x.name)
print('name',arr[-1].name)
print("addr",arr[-1].num)
print('city',arr[-1].location)