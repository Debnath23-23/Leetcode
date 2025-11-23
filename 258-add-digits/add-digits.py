class Solution:
    def addDigits(self, num: int) -> int:
        if num <=9: return num

        total=0

        while num>0:
            total += num%10
            num=num//10
        return self.addDigits(total)
        