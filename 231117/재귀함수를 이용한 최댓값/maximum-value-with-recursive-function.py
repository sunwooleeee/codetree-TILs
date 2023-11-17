n=int(input())-1
list_name=list(map(int,input().split()))
max_value=0
def f(list_name,n,max_value):
    if n==-1:
        return max_value
    if list_name[n]>max_value:
        max_value=list_name[n]
    return f(list_name,n-1,max_value)
print(f(list_name,n,max_value))