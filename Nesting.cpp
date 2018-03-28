#include <stack>

int solution(string &S) {
    
    if(S.size() == 0)
        return 1;
    
    std::stack<char> brackets;
    brackets.push(S[0]);
    
    for(unsigned int i = 1; i < S.size(); i++){
        
        if(S[i] == ')' && brackets.top() == '(')
            brackets.pop();
        else
            brackets.push(S[i]);
    }
        
    if(brackets.size() == 0)
        return 1;
    else
        return 0;
}
