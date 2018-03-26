#include <algorithm>

int solution(vector<int> &A) {
    
    std::sort(A.begin(), A.end());
    int lastIndex = A.size() - 1;
    int result = A[lastIndex] * A[lastIndex - 1] * A[lastIndex -2];;

    if(A[0] < 0 && A[1] < 0 && A[lastIndex] >= 0){
        
        int tmpResult_1 = A[0] * A[1] * A[lastIndex];
        int tmpResult_2 = A[lastIndex-2] * A[lastIndex-1] * A[lastIndex];
        
        result = tmpResult_1 > tmpResult_2 ? tmpResult_1 : tmpResult_2;
    }
    
    return result;
}


