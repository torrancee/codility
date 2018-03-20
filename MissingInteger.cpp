#include <algorithm>
#include <set>

int solution(vector<int> &A) {
    
    std::sort(A.begin(), A.end());
    std::set<unsigned int> mySet;
    
    for(unsigned int i = 0; i < A.size(); i++)
    {
        if(A[i] <= 0)
            continue;
        else
            mySet.insert(A[i]);
    }
    
    unsigned int previousElement = 0;
    
    if(mySet.size() == 0){
        return 1;
    }
    else
    {
        for(auto& tmpElement : mySet)
        {
            if(tmpElement != previousElement + 1)
                return previousElement + 1;
            else
                previousElement = tmpElement;
        }
    }
    return previousElement + 1;
}


