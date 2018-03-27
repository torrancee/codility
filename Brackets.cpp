#include <stack>
#include <map>

int solution(string &S) {

    if(S.size() == 0)
        return 1;
        
    std::map<char, char> charsMap;
    charsMap['('] = ')';
    charsMap['{'] = '}';
    charsMap['['] = ']';
    
    std::stack<char> charStack;
    charStack.push(S[0]);

    for(unsigned int i = 1; i < S.size(); i++){
        
        if((charStack.size() > 0) && S[i] == charsMap[charStack.top()]){
            charStack.pop();
        }
        else{
            charStack.push(S[i]);
        }
    }
    
    return charStack.size() == 0 ?  1 : 0;
}


