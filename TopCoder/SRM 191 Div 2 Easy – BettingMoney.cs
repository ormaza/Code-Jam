public class BettingMoney
    {
        public int moneyMade(int[] amounts, int[] centsPerDollar, int finalResult)
        {
            int gain = 0;
            for (int i = 0; i < amounts.Length;i++ )
            {
                if (i == finalResult) continue;
                else gain += amounts[i];
            }
            gain*=100;
            int loss = centsPerDollar[finalResult]*amounts[finalResult];
            return gain-loss;
        }
    }
