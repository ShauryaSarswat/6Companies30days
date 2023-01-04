# Question review and Notes

In the start the question sounded so easy and all the approaches that i used to solve the question were able to pass the sample test cases given. I was not able to solve this question in 1.5 hr because everytime i made a change to the code there was some or the other case that appeared to have left because all of my solution doesn't belonged to the DP group yet one of the solution was able to handle 47/49 test cases. The sample test cases were passed in about 2 - 3 minutes of coding only and the 47/49 solution was quoted in about 30 mins.

The solution of the above question required me to see the editorial of the question and also some part of the code.

How the question was solved :

- Sort all array elements in increasing order. The purpose of sorting is to make sure that all divisors of an element appear before it.
- Create an array dp[] of same size as input array. dp[i] stores size of divisible
subset ending with arr[i] (In sorted array). The minimum value of dp[i] would be 1.

- Traverse all array elements. For every element, find a divisor arr[j] with largest value of dp[j] and store the value of dp[i] as dp[j] + 1.


eg. Arr[] = {1,4,16,8,7}

Step 1 : Sort in increasing order 

Arr[] = {1,4,7,8,16}

Step 2 : initialize DP as default value 1

Arr[] = {1,4,7,8,16}
dp[]  = {1,1,1,1,1}

Step 3 : Traverse all elements. For any element find an divisor arr[j] with largest value in dp[j] and store dp[i] = dp[j]+1

Arr[] = 1 4 7 8 16
dp[] =  1 2 2 3 4

result = [1,4,8,16]
