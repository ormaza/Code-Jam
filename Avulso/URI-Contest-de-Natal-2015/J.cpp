#include <bits/stdc++.h>

using namespace std;

int GCDsimp (int num, int den) {
    int maximo;
    if(num<den) maximo=den;
    else maximo=num;
    while(num%maximo!=0 || den%maximo!=0) maximo--;
    return maximo;
}

int main() {
    int num, den, apostas [100], cont=0;
    while (cin >> num >> den) {
         apostas[cont] = GCDsimp (num,den);
         if  (apostas[cont]>5)
            cout << "Noel" <<endl;
         else
            cout << "Gnomos" << endl;
            cont++;
    }
    for (int i=cont-1; i>=0; i--) {
        cout << apostas[i] << " ";
    }
	cout<<endl;
    return 0;
}
