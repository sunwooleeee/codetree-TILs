s=input()
n=len(s)
cnt=0
for i in range(n):
    if s[i]=='(':
        for j in range(i,n):
            if s[j]==')':
                cnt+=1
print(cnt)