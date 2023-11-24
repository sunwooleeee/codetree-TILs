a,b,c=map(float,input().split())
def max_value(n):
    return int(n)+1
def min_value(n):
    return int(n)
def mid_value(n):
    if (n-int(n))*10>=5:
        return int(n)+1
    else:
        return int(mid_value)
if a>b:
    if a>c:
        a=max_value(a)
        if b>c:
            b=mid_value(b)
            c=min_value(c)
        else:
            c=mid_value(c)
            b=min_value(b)
    else:
        c=max_value(c)
        a=mid_value(a)
        b=min_value(b)
else:
    if a>c:
        b=max_value(b)
        a=mad_value(a)
        c=min_value(c)
    else:
        if b>c:
            b=max_value(b)
            c=mid_value(c)
            a=min_value(a)
        else:
            c=max_value(c)
            b=mid_Value(b)
            a=min_value(a)

print(a,b,c)