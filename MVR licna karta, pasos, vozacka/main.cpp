#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y, z;
    string s;
    cin>>n;
    priority_queue<pair<int, string> > p;
    for(int i=0; i<n; i++)
    {
        cin>>s>>x>>y>>z;
        p.push({-(x+2*y+4*z), s});
    }
    while(!p.empty())
    {
        cout<<p.top().second<<endl;
        p.pop();
    }
    return 0;
}
