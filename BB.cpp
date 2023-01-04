#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cin>>ch;
    int k ;
    cin>>k;
    int len = strlen(ch);
    int ans = 0,zero=0;
    for(int i=len-1;i>=0;i-- )
    {
        if(ch[i]=='0')
            zero++;
        else
            ans++;

        if(zero==k)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    if(zero<k)
    {
        cout<<len-1<<endl;
    }
    return 0;
}
