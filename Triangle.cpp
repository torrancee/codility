#include <algorithm>

int solution(vector<int> &A) {
    
    if(A.size() < 3)
        return 0;
        
    std::sort(A.begin(), A.end());
    
    for(unsigned int i = 0; i < A.size() - 2; i++)
    {
        if(A[i] <= 0)
            continue;
        else{
            unsigned int sum = A[i] + A[i+1];
            if(sum > A[i+2])
                return 1;
        }
    }
    return 0;
}
