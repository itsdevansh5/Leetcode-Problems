class Solution:
    def kthCharacter(self, k: int) -> str:
        word = "a"
        i = 0
        while len(word) < k:
            temp = ""
            for char in word:
                temp += chr(ord(char) + 1)
                if len(word) + len(temp) >= k:
                    break
            word += temp
        return word[k - 1]
