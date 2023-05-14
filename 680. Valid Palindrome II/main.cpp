#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool is_palindrome(string s, int avoid)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(i==avoid)
                i++;
            if(j==avoid)
                j--;

            //cout<<"comparing: "<<s[i]<<" "<<s[j]<<endl;
            if(s[i]!=s[j])
                return false;

            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int i=0, j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                break;
            i++;
            j--;
        }
        if(is_palindrome(s, i)||is_palindrome(s, j))
            return true;
        return false;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
