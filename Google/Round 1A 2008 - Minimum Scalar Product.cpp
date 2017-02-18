#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin>>t;
    int cont=1;
    while(t--)
    {
        int n; cin>>n;
        vector<long> a,b;
        long long in;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            a.push_back(in);
        }
        for(int i=0;i<n;i++)
        {
            cin>>in;
            b.push_back(in);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        long long sum=0;
        for(int i=0;i<n;i++) sum+=(a[i]*b[i]);
        cout<<"Case #"<<cont++<<": "<<sum<<endl;
    }
	return 0;
}
