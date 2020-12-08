'''
class student():
    def __init__(self, name, id):
        self.name = name
        self.id = id
        print(self.id)


std = student("harry", 1)
std.id = 2
print(std.id)

'''
'''


class obj():
    def __init__(self, count=100):
        self.count = count


o = obj()
o1 = obj(200)
print(o.count)
print(o1.count)


'''


class harry():
    def __init__(self, name):
        self.name = name


a1=harry("hk")
a2=harry("hk")