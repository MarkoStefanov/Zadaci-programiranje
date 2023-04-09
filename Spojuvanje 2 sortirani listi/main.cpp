#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> password_database;
    password_database["Mirce"]="p@$$w0rd";
    string username="", password="";
    bool t=1;
    while(t)
    {
        cout<<"username: ";
        cin>>username;
        cout<<"password: ";
        cin>>password;
        if(password_database[username]!=password)
            cout<<"Incorrect username or password, try again."<<endl;
        else
        {
            cout<<"Logging in..."<<endl;
            t=0;
        }
    }
    return 0;
}
