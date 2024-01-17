from collections import deque
dq=deque()
n=int(input())
for i in range(n):
    a=input()
    if a.startswith('push_front'):
        dq.appendleft(a[-1])
    if a.startswith("push_back"):
        dq.append(a[-1])
    if a.startswith("pop_front"):
        print(dq.popleft())
    if a.startswith("pop_back"):
        print(dq.pop())
    if a.startswith("size"):
        print(len(dq))
    if a.startswith("empty"):
        if len(dq)==0:
            print(1)
        else:
            print(0)
    if a.startswith("front"):
        print(dq[0])
    if a.startswith("back"):
        print(dq[-1])