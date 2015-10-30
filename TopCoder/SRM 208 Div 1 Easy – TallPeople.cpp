class TallPeople
{
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
    public: vector<int> getPeople(vector <string> people)
    {
        vector<int> row,colum,out;

        vector<vector<int>> db;

        for(int i=0;i<people.size();i++)
        {
            string aux = people[i]; //cada linha de people
            string cat="";
            vector<int> num;  //aux vector
            for(int j=0;j<aux.length();j++)
            {
                if(aux[j]!=32) cat+=aux[j];
                else
                {
                    int n = toInt(cat);
                    num.push_back(n);
                    cat="";
                }
                if(j==aux.length()-1)
                {
                    int n = toInt(cat);
                    num.push_back(n);
                }
            }
            db.push_back(num);
        }

        //tallest-of-the-shortest
        vector<int> tallest;
        for(int i=0;i<db.size();i++)
        {
            vector<int> aux = db[i];
            sort(aux.begin(),aux.end());
            tallest.push_back(aux[0]);
        }
        sort(tallest.begin(),tallest.end());
        out.push_back(tallest[tallest.size()-1]);

        //shortest-of-the-tallest
        vector<int> shortest;
        vector<int> aux = db[0];

        for(int i=0;i<aux.size();i++)
        {
            vector<int> aux2;
            for(int j=0;j<db.size();j++)
            {
                aux2.push_back(db[j][i]);
            }
            sort(aux2.begin(),aux2.end());
            shortest.push_back(aux2[aux2.size()-1]);
        }
        sort(shortest.begin(),shortest.end());
        out.push_back(shortest[0]);

        return out;
    }
};
