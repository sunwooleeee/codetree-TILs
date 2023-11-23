class s:
    def __init__(self,n,h,w):
        self.n=n
        self.h=h
        self.w=w
arr=[]
for i in range(5):
    n,h,w=tuple(input().split())
    arr.append(s(n,int(h),float(w)))

arr.sort(key=lambda x:x.n)

print("name")
for i in range(5):
    print(arr[i].n,arr[i].h,arr[i].w)
print("")

arr.sort(key=lambda x:-x.h)
print("height")
for i in range(5):
    print(arr[i].n,arr[i].h,arr[i].w)