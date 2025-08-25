using System; 

class URI {

    static void Main(string[] args) {

        int[] contador = { 0, 0, 0, 0, 0, 0, 0 };
        int[] divisor = { 100, 50, 20, 10, 5, 2, 1 };
        int pos = 0;

        string strIn = Console.ReadLine();
        int valor = int.Parse(strIn);
        Console.WriteLine(valor);


        while (valor > 0 && pos < 7)
        {
            contador[pos] = (int)(valor / divisor[pos]);
            valor = valor % divisor[pos];
            pos++;
        }

        for (int i = 0; i < 7; i++) Console.WriteLine(contador[i] + " nota(s) de R$ " + divisor[i] + ",00");
    }

}
