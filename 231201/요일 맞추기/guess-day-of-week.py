num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
arr=['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat','Sun']
def f(m,d):
    for i in range(m):
        d+=num_of_days[i]
    return d 
m1,d1,m2,d2=map(int,input().split())

dif=f(m2,d2)-f(m1,d1)
if dif>=0:
    print(arr[dif%7])
else:
    print(arr[-(abs(dif)%7)])