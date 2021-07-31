#ifndef ACCOUNTSSTORAGE_H
#define ACCOUNTSSTORAGE_H
#include "accounts.h"


class accountsStorage
{
    private:
        int accountsCount;
        vector<accounts*> accountsVector;

    public:
        accountsStorage()
        {
            accountsCount = 0;
        }

        //check if a username is found in the current stored accounts
        //used when adding/deleting an account
        bool usernameExists(string user);
        //vector manipulation
        void addAccount(string user, string pass, string first, string last, int privilege);
        void deleteAccount(string user);
        void storeAccounts();
        void loadAccounts();
        void cleanup();     //free memory allocated by the vector
};

#endif // ACCOUNTSSTORAGE_H
