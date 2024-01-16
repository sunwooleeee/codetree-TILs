def f1(arr):
    low=0
    high=len(arr)-1
    if low<high:
        mid=(low+high)//2
        return f2(f1(arr[low:mid+1]),f1(arr[mid+1:high+1]))
    else:
        return arr
def f2(arr1,arr2):
    i=0
    j=0
    max_i=len(arr1)-1
    max_j=len(arr2)-1
    arr=[]
    while ((i<=max_i) and (j<=max_j)):
        if arr1[i]<=arr2[j]:
            arr.append(arr1[i])
            i+=1
        else:
            arr.append(arr2[j])
            j+=1
    if i>max_i:
        for x in range(j,max_j+1):
            arr.append(arr2[x])
    else:
        for x in range(i,max_i+1):
            arr.append(arr1[x])
    return arr
n=int(input())
arr=list(map(int,input().split()))

print(*f1(arr))