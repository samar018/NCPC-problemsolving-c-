#include<bits/stdc++.h>
using namespace std;
int visited[100000008/32];
int primearr[1000006];

bool bitcheck(int N,int pos)
{
    return (N&1<<pos);
}
void setbit(int &N, int pos)
{
    N = (N|1<<pos);

}

void showbit(int n)
{
    int arr[32];
    memset(arr,0,sizeof(arr));
    int co = 0;
    while(n>0)
    {
        arr[co++] = n%2;
        n/=2;
    }
    for(int i=31;i>=0;i--)
     cout<<arr[i];
    puts("");

}



int main()
{
    int n;
    cin>>n;
    int str_n = n;

    while(1)
    {
        showbit(n);
        int pos;
        cin>>pos;
        if(pos==-1)
            break;

        bool ans = bitcheck(str_n,pos);
        if(ans)
            cout<<"on"<<endl;
        else
            cout<<"off"<<endl;
    }
cout<<"now set bit\n";
    while(1)
    {
        showbit(n);
        int pos;
        cin>>pos;
        if(pos==-1)
            break;
        setbit(n,pos);
    }



    return 0;
}
