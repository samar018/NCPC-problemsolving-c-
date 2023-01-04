#include <bits/stdc++.h>

using namespace std;

/*
int lowsearch(int arr[],int n,int sz)
{
    int high=sz-1, low=0, mid;
  int  index  = -1;
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

if(index==-1)
return mid;
else
    return index;
}


int highsearch(int arr[],int n,int sz)
{
    int high=sz-1, low=0, mid;
 int index = -1;
    while(low<=high){
        mid = (low+high)/2;

        if(n==arr[mid])
             {
                 index = mid;
                 low = mid+1;
             }
        else if(n>arr[mid])
            low = mid+1;
        else if(n<arr[mid])
            high = mid-1;

    }
if(index==-1)
return mid;
else
    return index;
}


*/
int main(){
    int ara[100005],n,m,a,b,countt,cases;
int case_no = 0;
    scanf("%d",&cases);

    while(cases--){
        printf("Case %d:\n",++case_no);
        scanf("%d %d",&n,&m);
        vector<int> v;
            for(int i=0; i<n; i++)
            {

            int yy;
           scanf("%d",&yy);
            v.push_back(yy);

            }

        for(int i=0; i<m; i++){
            scanf("%d %d",&a,&b);


  vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), a);
    up= std::upper_bound (v.begin(), v.end(), b);


int x =  (low- v.begin());
int y = (up - v.begin());
// cout<<x<<" "<<y<<endl;


            printf("%d\n",y-x);
        }
    }

return 0;
}

