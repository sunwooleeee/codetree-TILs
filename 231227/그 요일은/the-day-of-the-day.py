m1,d1,m2,d2=map(int,input().split())
a=input()
num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
arr=['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat','Sun']
day1=d1
for i in range(m1):
    day1+=num_of_days[i]
day2=d2
for i in range(m2):
    day2+=num_of_days[i]
day1+=arr.index(a)
dif=day2-day1
print(dif//7)