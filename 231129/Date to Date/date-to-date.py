num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
m1,d1,m2,d2=map(int,input().split())
for i in range(m1):
    d1+=num_of_days[i]
for j in range(m2):
    d2+=num_of_days[j]

print(d2-d1+1)