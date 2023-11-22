n=int(input())
class s:
    def __init__(self,name,kor,eng,math):
        self.name=name
        self.kor=kor
        self.eng=eng
        self.math=math
arr=[]
for i in range(n):
    name,kor,eng,math=tuple(input().split())
    arr.append(s(name,int(kor),int(eng),int(math)))
arr.sort(key=lambda x:x.kor+x.eng+x.math)
for i in range(n):
    print(arr[i].name,arr[i].kor,arr[i].eng,arr[i].math)