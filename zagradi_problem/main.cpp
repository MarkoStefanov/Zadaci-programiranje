#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> zagradi;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            zagradi.push(s[i]);
        else if(s[i]==']')
        {
            if(!zagradi.empty()&&zagradi.top()=='[')
                zagradi.pop();
            else
            {
                zagradi.push(s[i]);
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!zagradi.empty()&&zagradi.top()=='{')
                zagradi.pop();
            else
            {
                zagradi.push(s[i]);
                break;
            }
        }
        else if(s[i]==')')
        {
            if(!zagradi.empty()&&zagradi.top()=='(')
                zagradi.pop();
            else
            {
                zagradi.push(s[i]);
                break;
            }
        }
    }
    if(zagradi.empty())
        cout<<"Korektno";
    else
        cout<<"Nekorektno";

    return 0;
}
