class p_v:
    def __init__(self,n="codetree",c=50):
        self.n=n
        self.c=c
n1,c1=tuple(input().split())
p1=p_v(n1,c1)
p2=p_v()
print('product {} is {}'.format(p2.c,p2.n))
print('product {} is {}'.format(p1.c,p1.n))