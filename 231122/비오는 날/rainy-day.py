class weather:
    def __init__(self,x,y,z):
        self.x=x
        self.y=y
        self.z=z
    def test(self):
        if self.z=="Rain":
            return True
        else:
            return False
n=int(input())
weather_list=[]
for i in range(n):
    x,y,z=input().split()
    data=weather(x,y,z)
    if data.test():
        weather_list.append([data.x,data.y])
weather_list.sort(key=lambda x:x[0])
x,y=weather_list[0]
print(x,y,"Rain")