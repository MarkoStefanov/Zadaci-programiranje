#include <iostream>
#include <string.h>
#include <map>

using namespace std;

int main()
{
    int max=0, pomoshen;
    string s, result;
    map<string, int> m;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=1; j<s.size()-i+1; j++)
        {
            string q=s.substr(i, j);
            if(m.count(q)==0)
            {
                m[q]=1;
                pomoshen=1;
            }
            else
            {
                pomoshen=++m[q];
            }
            if(pomoshen>max)
            {
                max=pomoshen;
                result=q;
            }
            else if(pomoshen==max&&(q<result||q.size()>result.size()))
                result=q;
        }
    }
    cout<<result<<' '<<max;
    return 0;
}
