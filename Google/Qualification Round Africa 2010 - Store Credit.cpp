#include <iostream>
int main()
{
	int N,C,I,cont=0;
	cin>>N;

	while(N--){
		cont++;
		cin>>C>>I;
		int P[I];
		for(int i=0;i<I;i++) cin>>P[i];
		int a,b;
		for(a=0;a<I-1;a++){
			for(b=a+1;b<I;b++){
				if((P[a]+P[b])==C){
					a++; b++;
					cout<<"Case #"<<cont<<": "<<a<<" "<<b<<endl;
					break; break;
				}
			}
		}
	}
	return 0;
}
