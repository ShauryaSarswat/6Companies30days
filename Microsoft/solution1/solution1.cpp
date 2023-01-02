#include<bits/stdc++.h>
#include<string>
using namespace std;

long resolves(int a, int b, char Operator){
        if(Operator == '+') return a + b;
        else if(Operator == '-') return a - b;
        else if(Operator == '*') return (long)a*b;
        return a/b;
    }
long int calculat(int a,int b,char operator)
{
    if(operator=='+')
    {
        return a+b;
    }
    else if(operator=='-')
    {
        return a-b;
    }
    else if(operator=='*')
    {
        return a*b;
    }
    else if(operator=='/')
    {
        return a/b;
    }
    return -1;
}
int evalRPN(vector<string>& tokens) {
    stack<long> s;
    for(int i = 0; i < tokens.size(); i++){
        if(tokens[i].size() == 1 && isdigit(tokens[i])){
            long integer2 = s.top();
            s.pop();
            long integer1 = s.top();
            s.pop();
                
            string Operator = tokens[i];
            long resolvedAns = resolves(integer1, integer2 , Operator[0]);
            s.push(resolvedAns);
        }
        else 
            s.push(stol(tokens[i]));
        }
    return s.top();
}