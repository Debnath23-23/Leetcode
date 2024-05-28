class Solution(object):
    def romanToInt(self, s) :
        translation={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        number=0
        s=s.replace("IV","IIII")
        s=s.replace("IX","VIIII")
        s=s.replace("CD","CCCC")
        s=s.replace("CM","DCCCC")
        s=s.replace("XC","LXXXX")
        s=s.replace("XL","XXXX")
        for char in s:
            number+=translation[char]
        return number
        """
        :type s: str
        :rtype: int
        """
        