m1,d1,m2,d2=map(int,input().split())
a=input()
num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
arr=['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat','Sun']
for i in range(m1):
    d1+=num_of_days[i]
for i in range(m2):
    d2+=num_of_days[i]
print(d1,d2)
d1+=arr.index(a)
dif=d2-d1
print(dif//7+1)