vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    
    vector<int> result;
    
    vector<int> noOfA(S.size(), 0);
    vector<int> noOfC(S.size(), 0);
    vector<int> noOfG(S.size(), 0);
    vector<int> noOfT(S.size(), 0);
    
    if(S[0] == 'A')
        noOfA[0]++;
    else if (S[0] == 'C')
        noOfC[0]++;
    else if (S[0] == 'G')
        noOfG[0]++;
    else
        noOfT[0]++;
    
    for(unsigned i = 1; i < S.size(); i++){
        
        noOfA[i] = noOfA[i-1];
        noOfC[i] = noOfC[i-1];
        noOfG[i] = noOfG[i-1];
        noOfT[i] = noOfT[i-1];
        
            if(S[i] == 'A')
                noOfA[i]++;
            else if (S[i] == 'C')
                noOfC[i]++;
            else if (S[i] == 'G')
                noOfG[i]++;
            else
                noOfT[i]++;}
    
    for(unsigned int i = 0; i < P.size(); i++){
        
        if(noOfA[Q[i]] - noOfA[P[i]] > 0 || S[P[i]] == 'A'){
            result.push_back(1);
            continue;}
        else if(noOfC[Q[i]] - noOfC[P[i]] > 0 || S[P[i]] == 'C'){
            result.push_back(2);
            continue;}
        else if(noOfG[Q[i]] - noOfG[P[i]] > 0 || S[P[i]] == 'G'){
            result.push_back(3);
            continue;}
        else if(noOfT[Q[i]] - noOfT[P[i]] > 0 || S[P[i]] == 'T'){
            result.push_back(4);
            continue;}
        else if (P[i] == Q[i]){
            
            if(S[P[i]] == 'A')
                result.push_back(1);
            else if (S[P[i]] == 'C')
                result.push_back(2);
            else if (S[P[1]] == 'G')
                result.push_back(3);
            else
                result.push_back(4);}
    }
    
    return result;
}
