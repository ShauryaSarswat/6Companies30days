# Question review and Notes

This question was simpler as compared to the others as the question was fairly quoted and i was able to code and pass test cases using the brute force only in 20 mins but i was getting the Time limit exceeded error in some solutions.So, i tried another approach with some reduces space and time complexity it was able to solve most of the test cases but there was a test case that required a perfect mathematical solution so i reffered to some of the discussions, i was able to quote the formulae on myself.

How i solved the question :

- declared three variables sum1, sum2, and ans and initialized them with 0
- traversed for the array and calculated the value of sum1 and sum2 as sum1 the sum of the nums[i] and sum2 as i*nums[i] and added the previous value to it
- traversed the array in the reverse order and subtracted nums[i]*len(nums) from sum and add to sum1 and assigned the ans as max(sum[i] or sum1)
