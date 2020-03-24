#include <iostream>
long lowestPrimeFactor(long N,long pr = 3){
    bool isPrime =true;
    if(N<2)
    {
        std::cout << N << std::endl;
        return 1;
    }    
    else
    {
        for(long i=2;i<=N/2; ++i)
        {
            if(N%i==0)
            {
            isPrime=false;
            break;
            }
        }
    }
    if(isPrime)
    {
        std::cout << N << std::endl;
        return N;
    }
    else
    {
        if(N%2==0){
            std::cout << 2 << std::endl;
            return 2;
        }
        else
        {
            if(N%pr == 0)
            {
                std::cout << pr << std::endl;
                return pr;
            }
            else
            {
                return lowestPrimeFactor(N,pr+2);
            }    
        }
    }
}

int main()
{
lowestPrimeFactor(19);
lowestPrimeFactor(20);
lowestPrimeFactor(7);
lowestPrimeFactor(1);
lowestPrimeFactor(15);
}


