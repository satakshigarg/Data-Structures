class twoStacksOneArray :
    def _init_(self, n):
        self.size = n
        self.arr = [None] * n
        self.top1 = -1
        self.top2 = self.size
    def push1(x):
        if self.top1 < (self.top2 - 1):
            self.top1 += 1
            self.arr[self.top1] = x
            return True
        return False
    def push2(x):
        if self.top1 < (self.top2 - 1):
            self.top2 -= 1
            self.arr[self.top2] = x
            return True
        return False
    def pop1():
        if self.top1 > 0:
            self.top1 -= 1
            return self.arr[self.top1 + 1]
        return -1
    def pop2():
        if self.top2 < self.size:
            self.top2 += 1
            return self.arr[self.top2 - 1]
        return -1
