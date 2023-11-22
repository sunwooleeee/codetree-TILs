arr=['L','E','B','R','O','S']
w=input()
idx=-1
if w in arr:
    for i,j in enumerate(arr):
        if j==w:
            idx=i
            print(i)
else:
    print("None")