#include <algorithm>

int solution(vector<int> &A) {
    
    std::sort(A.begin(), A.end());
    int maxIndex =  A.size() - 1;
    
    if(maxIndex < 0 || A[0] != 1)
        return 1;
    
    for(int i = 0; i < maxIndex; i++)
    {
        if(A[i+1] != A[i]+1)
            return A[i] + 1;
    }
    
    return A[maxIndex]+1;
}
