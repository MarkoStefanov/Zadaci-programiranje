#include <bits/stdc++.h>

using namespace std;
vector<int> BFS (int start, vector<int> v[], int n)
{
    queue<int> q;
    q.push(start);
    vector<int> visited;
    for(int i=0; i<n; i++)
        visited.push_back(0);
    visited[start]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto next:v[node])
        {
            if(visited[next]==0)
            {
                visited[next]=visited[node]+1;
                q.push(next);
            }
        }
    }
    return visited;
}
int main()
{
    int v, e, x, y;
    cin>>v>>e;
    vector<int> connection[v];
    for(int i=0; i<e; i++)
    {
        cin>>x>>y;
        connection[x].push_back(y);
        connection[y].push_back(x);
    }
    vector<int> answer=BFS(0, connection, v);
    int step=answer[v-1];
    x=step;
    int path[x];
    path[0]=0;
    int position=v-1;

    while(step!=1)
    {
        path[step-1]=position;
        for(int i=0; i<connection[position].size(); i++)
        {
            if(answer[connection[position][i]]<step)
            {
                step=answer[connection[position][i]];
                position=connection[position][i];
                break;
            }
        }
    }
    for(int i=0; i<x; i++)
        cout<<path[i]<<' ';
    return 0;
}
