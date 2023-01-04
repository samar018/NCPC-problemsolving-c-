#include<bits/stdc++.h>
using namespace std;
int main()
{            //  0 1  2 3  4 5 6 7 8  9 ..... 1000006
    int arr[] = {2,5,-1,7,45,2,0,9,4,-5};
    int q = 50000;
    int sumarr[100];
    sumarr[0] = arr[0];
    for(int i=1;i<=9;i++)
    {
        sumarr[i]= sumarr[i-1]+arr[i];
    }
    for(int i=0;i<=9;i++)
        cout<<sumarr[i]<<" ";

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        int sum = 0;

         sum = sumarr[b] - sumarr[a-1];

        cout<<sum<<endl;
    }
    return 0;
}
