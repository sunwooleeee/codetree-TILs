n=int(input())
arr=[i for i in range(1,n+1)]
while len(arr)>1:
    arr.pop(0)
    arr.append(arr.pop(0))
print(*arr)