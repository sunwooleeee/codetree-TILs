n=int(input())
arr=list(map(int,input().split()))
class c:
    def __init__(self,num,idx):
        self.num=num
        self.idx=idx
    def new_idx(self,n_idx):
        self.n_idx=n_idx
new_arr=[]
for idx,num in enumerate(arr):
    new_arr.append(c(num,idx))
new_arr.sort(key=lambda x:(x.num,x.idx))
for i in range(n):
    new_arr[i].new_idx(i+1)
new_arr.sort(key=lambda x:x.idx)
for i in range(n):
    print(new_arr[i].n_idx,end=" ")