#User function Template for python3

class Solution:
    
    #Function to find the first non-repeating character in a string.
    def nonrepeatingCharacter(self,s):
        #code here
        for i in s:
            if s.count(i)==1:
                return i
        return '$'
