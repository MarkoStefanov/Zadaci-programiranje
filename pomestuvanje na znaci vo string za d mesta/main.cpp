#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, d, x;
    cin>>n>>d;
    deque<int> dq;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        dq.push_back(x);
    }
    for(int i=0; i<d; i++)
    {
        dq.push_front(dq.back());
        dq.pop_back();
    }
    auto it=dq.begin();
    while(it!=dq.end())
    {
        cout<<*it<<' ';
        it++;
    }
    return 0;
}
