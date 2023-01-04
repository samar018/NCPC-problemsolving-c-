#include<bits/stdc++.h>
using namespace std;
int binsearch(int arr[],int n,int sz)
{
    int high=sz-1, low=0, mid;
int index = -2;
    while(low<=high){
        mid = (low+high)/2;

        if(n==arr[mid])
             {
                 index  = mid;
                 high = mid-1;
             }
        else if(n>arr[mid])
            low = mid+1;
        else if(n<arr[mid])
            high = mid-1;

    }

return index+1;
}


int main()
{
    int ara[] = {1,2,5,5,5,5,7,8,9};
    cout<<binsearch(ara,5,9);
    return 0;
}
