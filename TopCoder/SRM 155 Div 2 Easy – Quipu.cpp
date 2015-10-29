class Quipu
{
    string toString(int n)
    {
      string out="";
      while(n)
      {
        char act=(n%10)+48;
        out+=act;
        n/=10;
      }
    return out;
    }
    
    int toInt(string n)
    {
    float out=0,cont=0;
        for(int i=n.size()-1;i>=0;i--)
        {
            int act = n[i]-48;
            out+=(act*pow(10,cont++));
        }
    return (int)ceil(out);
    }
    
    public: int readKnots(string knots)
    {
        string out="";
        for(int i=0;i<knots.length();i++)
        {
            if(knots[i]=='X')
            {
                int cont=1; i++;
                while(knots[i]=='X') {cont++; i++;}
                i--;
                out+=toString(cont);
            }
            else if(knots[i]=='-' && knots[i+1]=='-') out+='0';
        }
        return toInt(out);
    }
};
