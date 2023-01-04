#include<bits/stdc++.h>
using namespace std;
int visited[100000008/32];
int primearr[10000006];
int powarr[10000006];
bool bitcheck(int N,int pos)
{
    return (N&1<<pos);
}
void setbit(int &N, int pos)
{
    N = (N|1<<pos);

}


int  sive(int n)
{
    memset(visited,0,sizeof (visited));

    for(int i=3;i*i<=n;i+=2)
    {

        for(int j = i*i;j<=n; j=j+2*i)
        {
             setbit(visited[j>>5], j&31 );
        }
    }

    int co = 0;
     primearr[co++] = 2;

    for(int i=3;i<=n;i+=2)
    {
        if(bitcheck(visited[i>>5],i&31)==0){
        primearr[co++] = i;
        }
    }
return co;

}


int main()
{
   // freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    int co = sive(n);
    for(int i=0;i<co;i++)
    {
        printf("%d -> %d\n",i,primearr[i]);
    }
    int nn;
    cin>>nn;

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
