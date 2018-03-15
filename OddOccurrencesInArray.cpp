#include <algorithm>

int solution(vector<int> &A) {
    
    std::sort(A.begin(), A.end());
    int maxIndex = A.size() - 1;
    if(maxIndex == 0){
        return A[0];
    }
    else{
    for(int i = 0; i <= maxIndex; i += 2){
        if(i == maxIndex)
            return A[maxIndex];
        else if(A[i] != A[i+1])
            return A[i];
        }
    }
}
