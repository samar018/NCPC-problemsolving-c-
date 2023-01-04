#include<bits/stdc++.h>
using namespace std;
int level[1001][1001];
 int visited[1001][1001];
 int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
 int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
 int bfs(int r1,int c1,int r2,int c2)
 {
     memset(visited,0,sizeof (visited));


     queue< pair< int,int > > q;

     q.push(make_pair(r1,c1));
      visited[r1][c1]= 1;
     while(!q.empty())
     {
         pair<int ,int > fnt;
         fnt = q.front();
         q.pop();
         for(int i=0;i<8;i++)
         {
             int xx = fnt.first+fx[i];
             int yy = fnt.second+fy[i];
             if(r2==xx&&c2==yy)
                {

                    return 1+level[fnt.first][fnt.second];
                }
              if(visited[xx][yy]==0&&xx>=0&&yy>=0)
             {

             //cout<<-1<<endl;
                 level[xx][yy] =  1+level[fnt.first][fnt.second];
                 q.push(make_pair(xx,yy));
                 visited[xx][yy] = 1;
             }

         }
     }
 }


int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        cout<<bfs(r1,c1,r2,c2)<<endl;
    }
    return 0;
}
