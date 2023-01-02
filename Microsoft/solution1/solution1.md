# Question review and Notes

The question was simple and solvable. It took me around 25 mins to reach to the solution. The question was straight forward but there was a catch while solving it with python because in the third test case there was :

6 / -132 which resulted in -1 in place of 0, this was solved by first changing the operator to float and then converting the whole to an integer.

ie. int(6.0/-132)


How i solved the question :

- I reached the O(n) solution directly as the stack was the first thing that came to my mind
- The solution was developed by traversing the tokens list and if its digit then adding it to the stack else computing the last 2 elements of the stack and pushing the result on the top of the stack.
- In the end the stack will only contain one element this will be our result.
- I got the correct result for the first two test cases but the last test case took 10 mins to get resolved.


