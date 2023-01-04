#include<bits/stdc++.h>
using namespace std;
char arr[50020];
int main()
{

    scanf("%s",arr);
  int j=0,i=0,flag=0;

  for(;i<strlen(arr);i++)
  {
      if(arr[i]=='0' && arr[i+1]!='0'){
            flag=1;
           break;
      }
  }
  i++;
  if(flag==0) cout<<strlen(arr);

  else
  cout<<strlen(arr)-i;
    return 0;
}
