vector<int> solution(vector<int> &A, int K) {
    
    if(K == 0 || A.size() == 0)
        return A;		    
    else
    {   int lastIndex = A.size() - 1;
        for(int i = 0; i < K; i++)
        {
            int firstIndex = A[0];
            A[0] = A[lastIndex];
            
            
            for(int i = lastIndex; i > 1; i--)
            {
                A[i] = A[i-1];
            }
            
            A[1] = firstIndex;
        }
    }
    
    return A;
}



