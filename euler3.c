#include "stdio.h"
#include "math.h"
#include "malloc.h"
#define N 775146

int main(int argc, char const *argv[])
{
    int a = 0, c = sqrt(600851475143);
    
    int *A= NULL;
        
        A = (int *)calloc(N, sizeof(int));

        for (int i = 2; i*i < N; ++i)
        {
            if (A[i] == 0)
            {
                for (int k = i*i; k < N; k += i)
                {
                A[k] = 1;
                }    
            }           
        }        
        for (int i = 2; i < N; i++)
        {
            if (A[i] == 0 && 600851475143%i==0 && i>a)
            {
               a = i;
            }
        }
        
    printf("%d\n", a); 
    //printf("%d\n",c); printf("A[%d] = %d\n", i, A[N]);
    return 0;
}
/*
            printf("A[%d] = %d\n", i, A[i]);
            printf("%d\n", i);*/
