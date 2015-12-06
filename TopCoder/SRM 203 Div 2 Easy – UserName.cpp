class UserName
{
    bool verify(vector <string> sameNames, string name)
    {
        for(int i=0;i<sameNames.size();i++)
        {
            if(name==sameNames[i]) return false;
        }
        return true;
    }

    public: string newMember(vector <string> existingNames, string newName)
    {
        bool exists=false;
        for(int i=0;i<existingNames.size();i++)
        {
            if(newName==existingNames[i]){exists=true; break;}
        }

        if(!exists) return newName;
        else
        {
        string surname = newName;

        vector <string> sameNames;
        for(int i=0;i<existingNames.size();i++)
        {
            string act = existingNames[i];
            if(surname==act.substr(0,surname.size())) sameNames.push_back(act);
        }

        if(sameNames.empty()) return newName;
        else
        {
            sort(sameNames.begin(),sameNames.end());
            string name = newName;

            int cont=1;

            while(!verify(sameNames,name)) {name=newName+std::to_string(cont); cont++;}

            return name;
        }
        }
    }
};
