def evalRPN(tokens):
        stack = []
        for i in tokens:
            if i in ['+','-','*','/']:
                n1,n2 = stack.pop(),stack.pop()
                if i == '+':
                    stack.append(n2+n1)
                elif i == '-':
                    stack.append(n2-n1)
                elif i == '*':
                    stack.append(n2*n1)
                elif i == '/':
                    
                    stack.append(int(float(n2)/n1))
            else:
                stack.append(int(i))
        return stack[0]
