def combinationSum3(self,k,n):
        result = []
        def backtracking(combination, n, start):
            if k == len(combination):
                if n == 0: result.append(combination.copy())
                return
            for i in range(start, 10):
                combination.append(i)
                backtracking(combination, n-i, i+1)
                combination.pop()
        backtracking([], n, 1)
        return result