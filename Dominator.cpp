#include <stack>
#include <utility>

int solution(vector<int> &A) {
    
    std::stack<std::pair<int,int>> numberDominator;

    for(unsigned int i = 0; i < A.size(); i ++){
        
        if(numberDominator.size() == 0 || A[i] == numberDominator.top().first){
            numberDominator.push(std::pair<int,int>(A[i],i));
        }
        else{
            numberDominator.pop();
        }
    }
    
    if(numberDominator.size() != 0){
        unsigned int howManyTimeDominatorOccure = 0;
        for(auto &tmp : A){
            if(tmp == numberDominator.top().first){
                howManyTimeDominatorOccure++;
            }
        }            
            if(howManyTimeDominatorOccure > A.size()/2)
                return numberDominator.top().second;
        }
    
    return -1;
}
