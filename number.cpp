#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<1<<" "<<n<<endl;
    int sqrt_n = sqrt(n);
    for(int i=2;i<sqrt_n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" " <<n/i<<endl;
        }

    }

    if(sqrt_n*sqrt_n==n)
        cout<<sqrt_n<<endl;


    return 0;
}
