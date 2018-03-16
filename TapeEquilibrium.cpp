#include <cstdlib>

int solution(vector<int> &A) {
    
    int leftSide = A[0];
    int rightSide = 0;
    
    for(unsigned int i = 1; i < A.size(); i++)
    {
        rightSide += A[i];
    }
    
    unsigned int minDif = abs(leftSide - rightSide);
    
    for(unsigned int i = 1; i < A.size() - 1; i++)
    {
        leftSide += A[i];
        rightSide -= A[i];
        
        unsigned int localDif = abs(leftSide - rightSide);
        if(localDif < minDif){
            minDif = localDif;
        }
    }
    
    return minDif;
}
