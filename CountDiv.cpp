int solution(int A, int B, int K) {


    long i = A;
        while(i%K != 0)
            i++;
            
    long j = B;
        while(j%K != 0)
            j--;

    return (long)(j + K - i)/K;
}

