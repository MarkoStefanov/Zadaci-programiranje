#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        vector<pair<int, int> > v;
        for(int i=0; i<people.size(); i++)
            v.push_back({people[i][0], (-1)*people[i][1]});
        sort(v.begin(), v.end());
        vector<vector<int> > result;
        for(int i=0; i<v.size(); i++)
            result.push_back({-1, -1});
        for(int i=0; i<v.size(); i++)
        {
            int counter=0;
            int traverse=0;
            while(counter>v[i].second)
            {
                if(result[traverse][0]==-1)
                    counter--;
                traverse++;
            }
            while(result[traverse][0]!=-1)
                traverse++;
            result[traverse][0]=v[i].first;
            result[traverse][1]=(-1)*v[i].second;
        }
        //for(int i=0; i<v.size(); i++)
        //{
        //    cout<<"["<<result[i][0]<<", "<<result[i][1]<<"] ";
        //}
        return result;
    }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
