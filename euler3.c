#include "stdio.h"
#include "math.h"
#include "locale.h"
#include "malloc.h"

int main(int argc, char const *argv[])
{setlocale(LC_ALL, "Rus");
    int a = 0, N;
    long long int c = 0;
    

    M1: printf("Введите число:\n");
    scanf("%lli", &c);
    if (c>0)
    {
      N = sqrt(c);
      printf("корень числа равен %d\n", N);
    }
    else{
        printf("Неправильное число\n");
        goto M1;
    }
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
        for (int i = 2; i <= N; i++)
        {
            if (A[i] == 0 && c%i==0 && i>a)
            {
               a = i;
            }
        }
        
    printf("Наибольший делитель числа: %d\n", a); 
    return 0;
}
