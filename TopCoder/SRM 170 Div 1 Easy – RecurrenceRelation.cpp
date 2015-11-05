class RecurrenceRelation
{
    public: int moduloTen(vector <int> coefficients, vector <int> initial, int N)
    {
        int tam = initial.size();
        long long recurrency[N+1];

        //evitar segmentation fault
        if(N>tam)
        {
            for(int i=0;i<tam;i++) recurrency[i]=initial[i]%10;
        }
        else
        {
            for(int i=0;i<=N;i++) recurrency[i]=initial[i]%10;
        }

        //faz a recorrencia
        for(int i=tam;i<=N;i++)
        {
            int cont=tam; long long sum=0; int local=0;
            while(cont)
            {
                sum+=recurrency[i-cont]*coefficients[local++];
                cont--;
            }
            sum%=10;
            recurrency[i]=sum;
        }

        //for(int i=0;i<=N;i++) cout<<recurrency[i]<<" ";
        //cout<<endl;

        int retorno;
        if(recurrency[N]>=0) retorno=recurrency[N];
        else retorno=10-((recurrency[N]*-1));
        return retorno;
    }
};
