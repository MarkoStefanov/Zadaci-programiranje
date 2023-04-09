#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int v, e, x, y;
    cin>>v>>e;
    int matrix[v][v];
    vector<int> list_of_neighbours[v];
    for(int i=0; i<e; i++)
    {
        cin>>x>>y;
        matrix[x][y]=1;
        matrix[y][x]=1;
        list_of_neighbours[x].push_back(y);
        list_of_neighbours[y].push_back(x);
    }
    return 0;
}
