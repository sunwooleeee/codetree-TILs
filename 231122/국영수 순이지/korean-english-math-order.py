student_list=[]
class student:
    def __init__(self,name,kor,eng,math):
        self.name=name
        self.kor=kor
        self.eng=eng
        self.math=math
n=int(input())
for i in range(n):
    name,kor,eng,math=tuple(input().split())
    student_list.append(student(name,int(kor),int(eng),int(math)))
student_list.sort(key=lambda x:(-x.kor,-x.eng,-x.math))
for i in student_list:
    print(i.name,i.kor,i.eng,i.math)