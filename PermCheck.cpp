#include <algorithm>

int solution(vector<int> &A) {
    
  std::sort(A.begin(), A.end());
  for(unsigned int i = 0; i < A.size(); i++)
  {
     if(A[i] != i + 1)
        return 0;
  }
  
  return 1;
}

