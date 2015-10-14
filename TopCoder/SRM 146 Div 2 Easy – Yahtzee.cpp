class YahtzeeScore{
  public: int maxPoints(vector <int> toss){
	  sort(toss.begin(), toss.end());
	  int maxsum = toss[0];
	  int i = 0;
	  while (i<5)
	  {
		int newcur = toss[i]; int newsum = toss[i];
	  	while (toss[++i] == newcur && i<5) newsum += toss[i];
		if (newsum>maxsum) { maxsum = newsum; }
	  }
	  return maxsum;
	}
};
