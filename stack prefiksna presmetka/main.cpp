#include <iostream>
#include <stack>

using namespace std;

int main()
{
    char x='.';
    stack <int> kup;
    while(x!='=')

    {
        cin>>x;
        if(x=='*')
        {
            int pomoshen=kup.top();
            kup.pop();
            pomoshen*=kup.top();
            kup.pop();
            kup.push(pomoshen);

        }
        else if(x=='+')
        {
            int pomoshen=kup.top();
            kup.pop();
            pomoshen+=kup.top();
            kup.pop();
            kup.push(pomoshen);

        }
        else if(x=='-')
        {
            int pomoshen=kup.top();
            kup.pop();
            pomoshen-=kup.top();
            kup.pop();
            kup.push(pomoshen);
        }
        else if(x!='=')
        {
            kup.push(x-'0');

        }

    }
    cout<<kup.top();
    return 0;
}
