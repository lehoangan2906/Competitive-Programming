def tribonacci(n):
        """
        :type n: int
        :rtype: int
        """
        array = [0, 1, 1]
        for i in range(3, n+1):
            array.append(array[i - 1] + array[i - 2] + array[i - 3])
        return array[n]

print(tribonacci(4))





def tribonacci2(self, n):
        return self.helper(n, {0:0, 1:1, 2:1})
    
def helper(self, n, memo):
    if n not in memo:
        memo[n] = self.helper(n-1, memo) + self.helper(n-2, memo) + self.helper(n-3, memo)
    return memo[n]

