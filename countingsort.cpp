#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2,6,1,7,9,2,4,2,6,100,99};
    int n = 11;
int count[109];
for(int i=0;i<109;i++)
    count[i] = 0;

    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=0;i<109;i++)
    if(count[i]>0)
        cout<<i<<" -> "<<count[i]<<endl;



    for(int i=0;i<109;i++)
    {
        for(int j=0;j<count[i];j++)
            cout<<i<<" ";

    }



/*
    for(int i=0;i<11;i++)
        cout<<arr[i]<<" ";
*/
    return 0;
}
