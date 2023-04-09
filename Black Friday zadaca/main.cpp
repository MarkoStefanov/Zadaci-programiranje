#include <iostream>

using namespace std;

int main()
{
    int n, in, out, d, max=0;
    cin>>n;
    string s;
    int den[1440]={0};
    for(int i=0; i<n; i++)
    {
        cin>>s>>d;
        in=((s[0]-'0')*10+(s[1]-'0'))*60+(s[3]-'0')*10+(s[4]-'0');
        out=in+d;
        for(int j=in; j<=out; j++)
        {
            den[j]++;
            if(den[j]>max)
                max=den[j];
        }
    }
    cout<<max;
    return 0;
}
