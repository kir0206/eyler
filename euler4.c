#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
    int a = 999;

    int n[6] = {0};
    
    for (int i = 500; i < a; i++)
    {
        for (int j = 500; j < a; j++)
        {
            for (int z = 100000, b = 1, k = 0; k < 6; k++, z/=10, b*=10)
            {
                n[k] = floor(((i*j)%b)/z);
                printf("%d\n%d\n%d\n",z, b, n[k]);      
                
            }
               //gcc -Wall -g euler4.c -o Euler4 -lm
        }
               
    }
    return 0;
}
