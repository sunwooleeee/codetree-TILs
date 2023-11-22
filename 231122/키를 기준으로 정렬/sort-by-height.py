n=int(input())
class s:
    def __init__(self,name,hegiht,weight):
        self.name=name
        self.hegiht=hegiht
        self.weight=weight
arr=[]
for i in range(n):
    name,hegiht,weight=tuple(input().split())
    arr.append(s(name,hegiht,weight))
arr.sort(key=lambda x: x.hegiht)
for i in range(n):    
    print(arr[i].name,arr[i].hegiht,arr[i].weight)