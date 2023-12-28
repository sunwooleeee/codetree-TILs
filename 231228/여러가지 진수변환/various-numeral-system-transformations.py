n,b=map(int,input().split())
if b==4:
    arr=[]
    while True:
        if n>=4:
            arr.append(n%4)
            n//=4
        else:
            arr.append(n)
            break;
    for i in arr[::-1]:
        print(i,end="")
if b==8:
    arr=[]
    while True:
        if n>=8:
            arr.append(n%8)
            n//=8
        else:
            arr.append(n)
            break;
    for i in arr[::-1]:
        print(i,end="")