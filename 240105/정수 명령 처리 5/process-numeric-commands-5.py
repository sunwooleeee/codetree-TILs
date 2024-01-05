n=int(input())
arr=[]
for i in range(n):
    o=input()
    if o[0:4]=='push':
        a,b=o.split()
        b=int(b)
        arr.append(b)
        
    elif o[0:3]=='pop':
        arr.pop(-1)
        
    elif o[0:4]=='size':
        print(len(arr))
        
    else:
        a,b=o.split()
        b=int(b)-1
        print(arr[b])