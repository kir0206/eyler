#include "stdio.h"

long long int find(long long int x){
    long long int a = 0;
    int count = 0;
    for (long long int i = 2; i < x; i++)
    {
        
        if (x%i==0)
        {
        }   
        if (count = 1)
        {
            printf("%lli\n", i);
        }               
    }  
    
}

int main(int argc, char const *argv[])
{
    long long int a, b, c = 3195;
    
    for (long long int i = 3; i < c; i++)
    {
        b=find(i);
    } 
    return 0;
}















// /printf("%lli %2lli\n", i, n); 
/*for (long long int i = 2; i < c; i++)
    {
        if (c%i==0)
        {
            for (long long int n = 2; n < i; n++)
            {   
                a=i;                
                if (i%n==0)
                {                       
                   a=0;
                   break; 
                }
                
            }
            if (a>b)
            {
                b=a;
            }
           
            
        }
    }
         */