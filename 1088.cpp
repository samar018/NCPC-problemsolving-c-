#include <bits/stdc++.h>

using namespace std;

int binsearch(int arr[],int n,int sz)
{
    int high=sz-1, low=0, mid,flag=0;
int index = -2;
    while(low<=high){
        mid = (low+high)/2;

        if(n==arr[mid])
             {
                 index = mid;

                 high = mid-1;
             }
        else if(n>arr[mid])
            low = mid+1;
        else if(n<arr[mid])
            high = mid-1;

    }

return (index!=-2)?index:(mid);
}


int main(){
    int ara[100005],n,m,a,b,countt,cases;

    scanf("%d",&cases);

    while(cases--){
        scanf("%d %d",&n,&m);

        for(int i=0; i<n; i++)
            scanf("%d",&ara[i]);

        for(int i=0; i<m; i++){
            scanf("%d %d",&a,&b);
            int flag = binsearch(ara,a,n) + 1;

            countt=1;

            if(b>ara[n-1]) b = ara[n-1];

            while(ara[++flag]<=b){
                countt++;
            }

            printf("Case %d : %d",cases+1,countt);
        }
    }

return 0;
}
