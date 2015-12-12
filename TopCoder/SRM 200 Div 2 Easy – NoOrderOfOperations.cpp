class NoOrderOfOperations
{
    int number(char n)
    {
        switch(n)
        {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        }
    }

    public: int evaluate(string expr)
    {
        int result=number(expr[0]);
        for(int i=1;i<expr.length();i+=2)
        {
            if(expr[i]=='+') result+=number(expr[i+1]);
            else if(expr[i]=='-') result-=number(expr[i+1]);
            else if(expr[i]=='*') result*=number(expr[i+1]);
            else if(expr[i]=='/') result/=number(expr[i+1]);
        }
        return result;
    }
};
