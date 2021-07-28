#ifndef ACCOUNTS_H
#define ACCOUNTS_H
#include <string>

using namespace std;

class accounts
{
    public:
        accounts();
        accounts(string user, string pass, string first, string lastN, int priv, int sale);
        void setUsername(string user);
        string getUsername() const;
        void setPassword(string pass);
        string getPassword() const;
        void setFirstName(string first);
        string getFirstName() const;
        void setLastname(string last);
        string getLastName() const;
        void setPrivilege(int priv);
        int getPrivilege() const;
        void setSales(int sale);
        int getSales() const;
        //this is cool?

    private:
        string username;
        string password;
        string firstName;
        string lastName;
        int privilege;
        int sales;
};

#endif // ACCOUNTS_H
