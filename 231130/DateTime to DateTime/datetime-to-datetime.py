def f1(day,hour):#일_시
    hour+=day*24
    return hour
def f2(hour,minute):
    minute+=hour*60
    return minute

day,hour,minute=map(int,input().split())
first= f2(f1(11,11),11)
second=f2(f1(day,hour),minute)

if second-first<0:
    print(-1)
else:
    print(second-first)