class BusinessTasks
{
    public: string getTask(vector <string> list, int n)
    {
        int cont=0;
        while(list.size()>1)
        {
            cont=(cont+n-1)%list.size();
            list.erase(list.begin()+cont);
        }
        return list[0];
    }
};
