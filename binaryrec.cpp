
#include<bits/stdc++.h>
using namespace std;
int binsearch(int arr[],int item,int low, int high)
{
int mid = (low+high)/2;
    if(low==high&&arr[mid]==item)
    return mid;

if(low>high&&arr[mid]!=item)
    return 99;

else if(arr[mid]>=item)
binsearch( arr, item, low,mid-1);
else if(arr[mid]<item)
binsearch(arr, item, mid+1,high);


}


int main()
{
    int ara[] = {1,2,5,5,5,5,7,8,9};
    cout<<binsearch(ara,5,0,8);
    return 0;
}
