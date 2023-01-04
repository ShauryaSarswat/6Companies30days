def maxRotateFunction(self, nums):
        sum,sum1,ans = 0,0,0
        for i in range(len(nums)):
            sum+=nums[i]
            sum1+=(i*nums[i])
        ans = sum1
        for i in range(len(nums)-1,-1,-1):
            print(i)
            sum1+=(sum-(nums[i]*len(nums)))
            ans = max(sum1,ans)
        return ans