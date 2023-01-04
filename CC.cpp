#include<bits/stdc++.h>
using namespace std;
struct data{
int diff;
int a;
int b;

bool operator < ( const data& b ) const {

         return diff < b.diff;
    }


};

data mydata[200005];

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>mydata[i].a;
    }

    for(int i=0;i<n;i++)
    {
         cin>>mydata[i].b;
    }
    for(int i=0;i<n;i++)
    {
         mydata[i].diff = mydata[i].a-mydata[i].b;
    }

    sort(mydata,mydata+n);
   int ans = 0;
    for(int i=0;i<k;i++)
    {
        ans+=mydata[i].a;

       // cout<<mydata[i].diff<<" "<<mydata[i].a<<" "<<mydata[i].b<<endl;
    }
    for(int i=k;i<n;i++)
{
    if(mydata[i].diff<=0)
        ans+=mydata[i].a;
    else
        ans+=mydata[i].b;
}

cout<<ans<<endl;
    return 0;
}
