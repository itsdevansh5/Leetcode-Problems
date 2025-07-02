class Solution:
    def possibleStringCount(self, word: str, k: int) -> int:
        MOD = 10**9 + 7

        groups = []
        total_combinations = 1
        i = 0
        while i < len(word):
            j = i
            while i < len(word) and word[i] == word[j]:
                i += 1
            group_len = i - j
            groups.append(group_len)
            total_combinations = (total_combinations * group_len) % MOD

        num_groups = len(groups)

        if k <= num_groups:
            return total_combinations

        target_extra_length = k - num_groups

        dp = [0] * target_extra_length
        dp[0] = 1

        for group_len in groups:
            max_extra_from_this_group = group_len - 1

            for j in range(1, target_extra_length):
                dp[j] = (dp[j] + dp[j - 1]) % MOD

            for j in range(target_extra_length - 1, max_extra_from_this_group, -1):
                dp[j] = (dp[j] - dp[j - (max_extra_from_this_group + 1)] + MOD) % MOD

        invalid_extra_combinations = sum(dp) % MOD

        result = (total_combinations - invalid_extra_combinations + MOD) % MOD
        return result