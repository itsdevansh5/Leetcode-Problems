
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        from collections import Counter
        freq = Counter(arr)  # Step 1: Count frequencies

    # Step 2 & 3: Find lucky numbers and return the max one
        lucky = [num for num, count in freq.items() if num == count]

        return max(lucky) if lucky else -1
        