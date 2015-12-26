bool Verify(int p[],int c[],int f[], int n, int P,int C,int F)
{
    if(P==0 && C==0 && F==0) return true;
    if(n==0 && (P!=0||C!=0||F!=0)) return false;

    if (p[n-1] > P || c[n-1] > C || f[n-1] > F ) return Verify(p,c,f,n-1,P,C,F);

    return Verify(p,c,f, n-1, P,C,F) || Verify(p,c,f, n-1, P-p[n-1],C-c[n-1],F-f[n-1]);
}

int main()
{
    int t; cin>>t;
    int cont=1;
    while(t--)
    {
        int P,C,F;
        cin>>P>>C>>F;

        int n; cin>>n;
        int p[n],c[n],f[n];

        for(int i=0;i<n;i++) cin>>p[i]>>c[i]>>f[i];

        if(Verify(p,c,f,n,P,C,F)) cout<<"Case #"<<cont++<<": yes"<<endl;
        else cout<<"Case #"<<cont++<<": no"<<endl;
    }
  return 0;
}
