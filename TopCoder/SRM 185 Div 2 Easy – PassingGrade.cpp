class PassingGrade
{
    public: int pointsNeeded(vector <int> pointsEarned, vector <int> pointsPossible, int finalExam)
    {
        float reach=finalExam;
        for(int i=0;i<pointsPossible.size();i++) reach+=pointsPossible[i];
        reach*=0.65;

        float earned=0;
        for(int i=0;i<pointsEarned.size();i++) earned+=pointsEarned[i];
        float need=(reach-earned);

        if(need>finalExam) return -1;
        else if(need<=0) return 0;
        else return ceil(need);
    }
};
