"""
you are a professional robber planning to rob houses along a street. Each house has a certain amount of money 
etashed, the only constraint stopping you from robbing each of them is that adjacent houses have security 
systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of maney you can rob tonight without alerting the police

"""
class solution(object):
    def rob(self, nums):
        """
        :type nums: list[int]
        :rtype: int
        """
        rob1, rob2 = 0, 0

        # [rob1, rob2, n, n+1]
        for n in nums:
            temp = max(n + rob1, rob2)
            rob1 = rob2
            rob2 = temp
        return rob2