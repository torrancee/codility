#include <unordered_set>

int solution(int X, vector<int> &A) {

    std::unordered_set<int> mySet;
    
    for(unsigned int i = 0; i < A.size(); i++)
    {
        mySet.insert(A[i]);
        if((int)mySet.size() == X)
            return i;
    }
    
    return -1;
}
