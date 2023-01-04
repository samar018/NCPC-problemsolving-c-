#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int A[10];
    int B[10];

    for(int i=0;i<10;i++)
    {
        A[i] = 0;
        B[i] = 0;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
     int x; cin>>x;
     A[x]++;
    }

       for(int i=0;i<n;i++)
    {
     int x; cin>>x;
     B[x]++;
    }

    int ans = 0;
    for(int i=1;i<=5;i++)
    {
        if((A[i]+B[i])%2!=0)
        {
            cout<<-1<<endl;
            return 0;
        }

    else
    {
              int avg = (A[i]+B[i])/2;
              if(avg>A[i])
                ans+=(avg-A[i]);

    }


`

    }

    cout<<ans<<endl;



    return 0;
}
