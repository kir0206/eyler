#include "stdio.h"
#include "math.h"
#define c 6 

int main(int argc, char const *argv[])
{
    int a = 999;

    int n[c] = {0};
    int b0 = 0, b1 = 0, b2 = 0, i1 = 0, j1 = 0;
    
    for (int i = 316; i <= a; i++)
    {
        for (int j = 317; j <= a; j++)
        {
            for (int z = 100000, b = 1000000, k = 0; k < 6; k++, z/=10, b/=10)
            {
                n[k] = floor(((i*j)%b)/z);   
                if (n[0] == n[5] && n[1] == n[4] && n[2] == n[3])
                {
                    if (n[0] >= 9 && n[1] > b1 && n[2] > b2)
                    {
                        b0 = n[0];
                        b1 = n[1];
                        b2 = n[2];
                        i1 = i;
                        j1 = j;
                    }
                    
                }
                
                 
            }
               
        }
        
        
               
    }
    printf("%d%d%d%d%d%d i=%d j=%d\n", b0, b1, b2, b2, b1, b0, i1, j1);
    return 0;
}/*for (int i = 0; i < 6; i++)
                    {
                        printf("%d", n[i]);
                    }
                    printf("\n");*/
