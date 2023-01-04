#include<bits/stdc++.h>
using namespace std;
int visited[1000006];
int primearr[1000006];
int  sive(int n)
{
    memset(visited,-1,sizeof (visited));
    for(int i=0;i<=n;i+=2)
    {
        visited[i] = 1;
    }
    visited[2] = -1;

    for(int i=3;i*i<=n;i+=2)
    {
        for(int j = i*i;j<=n; j=j+2*i)
        {
            visited[j] = 1;
        }
    }

    int co = 0;
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==-1){
        primearr[co++] = i;
        }
    }
return co;

}


int main()
{
    int n;
    cin>>n;
    int co = sive(n);
    for(int i=0;i<co;i++)
    {
        printf("%d -> %d\n",i,primearr[i]);
    }
    int nn;
    cin>>nn;
    int powarr[100006];
    int store_nn = nn;
    memset(powarr,0,sizeof(powarr));
    for(int i = 0;primearr[i]<=store_nn;i++)
    {
            while(nn%primearr[i]==0)
        {
            nn=nn/primearr[i];
            powarr[i]++;
        }
        if(nn==1)
            break;

    }


    for(int i = 0;primearr[i]<=store_nn;i++)
{
    if(powarr[i]>0)
    {
        cout<<primearr[i]<<"^"<<powarr[i]<<endl;
    }
}
        return 0;
}
