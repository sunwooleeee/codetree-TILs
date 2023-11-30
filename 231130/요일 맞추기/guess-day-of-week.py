num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
arr=['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat','Sun']
m1, d1, m2, d2=map(int,input().split())

def cal(m,d):
    if m==0:
        return d
    d+=num_of_days[m]
    m-=1
    return cal(m,d)
re=cal(m2,d2)-cal(m1,d1)
if re>0:
    print(arr[(cal(m2,d2)-cal(m1,d1))%7])
else:
    re=-(abs(re)%7)
    print(arr[re])