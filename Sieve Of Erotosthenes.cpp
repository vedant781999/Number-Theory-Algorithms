#define maxN 2000001//max no. till which you have to calculate prime factorization
int spf[maxN];
void sieve()
{
   spf[1]=1;
    for(int i=2;i<maxN;i++)
        spf[i]=i;
    for(int i=4;i<maxN;i+=2)
        spf[i]=2;
    for(int i=3;i*i<maxN;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<maxN;j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
    
}