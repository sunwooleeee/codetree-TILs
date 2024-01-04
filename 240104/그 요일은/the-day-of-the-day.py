m1,d1,m2,d2=map(int,input().split())
a=input()
num_of_days = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
arr=['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat','Sun']
while m1>0:
    m1-=1
    d1+=num_of_days[m1]
while m2>0:
    m2-=1
    d2+=num_of_days[m2]
d1+=arr.index(a)
if d1>d2:
    cnt=0
else:
    cnt=1
    while d1+7<=d2:
        cnt+=1
        d1+=7
print(cnt)