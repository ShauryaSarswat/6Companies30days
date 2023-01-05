class Solution(object):
    def longestPrefix(self, s):
	    fix = [0] * len(s)

	    for i in range(1, len(s)):
		    j = fix[i-1]
		    while j > 0 and s[j] != s[i]:
			    j = fix[j-1]
		    if s[j] == s[i]:
			    fix[i] = j+1

	    return s[len(s)-fix[-1]:]
        