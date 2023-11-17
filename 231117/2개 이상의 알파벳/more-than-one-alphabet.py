a=input()
def f(a):
    if a[0]*len(a)==a:
        return True
    else:
        return False
if f(a):
    print("No")
else:
    print("Yes")