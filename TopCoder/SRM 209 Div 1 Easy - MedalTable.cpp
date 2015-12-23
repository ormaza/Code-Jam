class MedalTable
{
private:
    struct medal
    {
        string country;
        int gold;
        int silver;
        int bronze;
    };
    bool contains(vector <medal>& country,string pais, int medalha)
    {
        for(int i=0;i<country.size();i++)
        {
            if(pais==country[i].country)
            {
                if(medalha==0) country[i].gold++;
                else if(medalha==1) country[i].silver++;
                else if(medalha==2) country[i].bronze++;
                return true;
            }
        }
        return false;
    }
    void ordenar(vector <medal>& country)
    {
        for(int i=1;i<country.size();i++)
        {
            medal ele = country[i];
            for(int j=i-1;j>=0;j--)
            {
                if(ele.gold>country[j].gold) swap(country[j+1],country[j]);
                else if(ele.gold==country[j].gold)
                {
                    if(ele.silver>country[j].silver) swap(country[j+1],country[j]);
                    else if(ele.silver==country[j].silver)
                    {
                        if(ele.bronze>country[j].bronze) swap(country[j+1],country[j]);
                        else if(ele.bronze==country[j].bronze)
                        {
                            string elemento = ele.country;
                            string comp = country[j].country;

                            if(elemento[0]<comp[0]) swap(country[j+1],country[j]);
                            else if(elemento[0]==comp[0])
                            {
                                if(elemento[1]<comp[1]) swap(country[j+1],country[j]);
                                else if(elemento[1]==comp[1])
                                {
                                    if(elemento[2]<comp[2]) swap(country[j+1],country[j]);
                                }
                            }
                        }
                        else break;
                    }
                    else break;
                }
                else break;
            }
        }
    }
    vector <string> montar(vector <medal> country)
    {
        vector <string> resultados;
        string result="";
        for(int i=0;i<country.size();i++)
        {
            medal obj = country[i];
            result=obj.country+" "+to_string(obj.gold)+" "+to_string(obj.silver)+" "+to_string(obj.bronze);
            resultados.push_back(result);
            result="";
        }
        return resultados;
    }
public:
    vector <string> generate(vector <string> results)
    {
        vector <medal> country;
        for(int i=0;i<results.size();i++)
        {
            if(!contains(country,results[i].substr(0,3),0))
            {
                medal obj;
                obj.country = results[i].substr(0,3);
                obj.gold=1;
                obj.silver=0;
                obj.bronze=0;
                country.push_back(obj);
            }
            if(!contains(country,results[i].substr(4,3),1))
            {
                medal obj;
                obj.country=results[i].substr(4,3);
                obj.gold=0;
                obj.silver=1;
                obj.bronze=0;
                country.push_back(obj);
            }
            if(!contains(country,results[i].substr(8,3),2))
            {
                medal obj;
                obj.country=results[i].substr(8,3);
                obj.gold=0;
                obj.silver=0;
                obj.bronze=1;
                country.push_back(obj);
            }
        }
        ordenar(country);
        return montar(country);
    }
};
