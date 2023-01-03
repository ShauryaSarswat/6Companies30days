# Question review and Notes

The question was simple in terms of problem solving as I was aware of what to do. The approach to the solution was clear to use the DP solution of the <b>Sum of Subsets problem</b> as a base and printing the subsets having the length k. The question though was easy but took me around 45 minutes to get to the base and almost 1.15 hr to solve it to complete. I had to read editorial to solve the particular question.


How i solved the question :

- Developed a function to backtrack the subset sum.
- If the sum of subset is equal to the required length then return
- make different combinations of the range(1,n) and backtrack for the combination and if backtracking doesn't return then the element cant be placed in the array so remove it
- store combination arrays in the result
