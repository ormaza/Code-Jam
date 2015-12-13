int main()
{
    int t; cin>>t;
    int cont=1;
    while(t--)
    {
        string n; cin>>n;
        char maior='0';
        char menor='9';
        int imax,imin;
        for(int i=0;i<n.length();i++)
        {
            if(n[i]<menor && n[i]!='0') {menor=n[i]; imin=i;}
            if(n[i]>maior && n[i]!='0') {maior=n[i]; imax=i;}
        }

        string out1=n;
        swap(out1[0],out1[imin]);
        string out2=n;
        swap(out2[0],out2[imax]);

        cout<<"Case #"<<cont++<<": "<<out1<<" "<<out2<<endl;
    }
}
