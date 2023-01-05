# Question review and Notes

The problem was quoted as a hard problem because of its strict time and space complexity and not the question's problem solving requirements. I was able to get the brute force done with 2 or 3 mins and that passed most of the test cases. I later encountered the Output limit exceeded error which i removed by reducing one of the loops; then i got the memory limit exceeded error which i removed by reducing the storage variables. Still i was getting the memory limit exceeded error. I then brainstormed the code and i got a common link between prefixes and suffixes how they were related and this is how the question was solved. It took me around 20 mins to solve it.

It is also a well known algorithm known as KMP.It is taught to us in class.

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
