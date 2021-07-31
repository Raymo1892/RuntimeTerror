#include "accountsstorage.h"

using namespace std;

//check if username exists
bool accountsStorage::usernameExists(string user)
{
    for (auto it = accountsVector.begin(); it != accountsVector.end(); ++it)
    {
        if ((*it)->getUsername() == user)
        {
            return true;
        }
    }
    return false;
}

//add an account
void accountsStorage::addAccount(string user, string pass, string first, string last, int privilege)
{
    accountsVector.push_back(new accounts(user, pass, first, last, privilege, 0));
    incCount();
}

//stores created accounts in the vector
void accountsStorage::storeAccounts()
{
    ofstream fout;
    fout.open("accounts.dat");
    accounts *temp;

    fout << accountsCount << endl;

    for (auto it = accountsVector.begin(); it != accountsVector.end(); ++it)
    {
        temp = *it;
        fout << temp->getUsername() << " " << temp->getPassword() << " " << temp->getFirstName() << " " << temp->getLastName() << " " << temp->getPrivilege() << " " << temp->getSales() << endl;
    }
    fout.close();
}

//loads the stored accounts from the accounts file into the vector;
void accountsStorage::loadAccounts()
{
    ifstream fin;

    string tempUsername;
    string tempPassword;
    string tempFirstName;
    string tempLastName;
    int tempPrivilege;
    int tempSales;

    fin.open("accounts.dat");
    fin >> accountsCount;
    fin.ignore();

    for (int i = 0; i < accountsCount; i++)
    {
        fin >> tempUsername;
        fin >> tempPassword;
        fin >> tempFirstName;
        fin >> tempLastName;
        fin >> tempPrivilege;
        fin >> tempSales;
        accountsVector.push_back(new accounts(tempUsername, tempPassword, tempFirstName, tempLastName, tempPrivilege, tempSales));
    }

    fin.close();
}

void accountsStorage::cleanup()
{
    for (auto it = accountsVector.begin(); it != accountsVector.end(); ++it)
    {
        delete *it;
    }
    accountsVector.clear();
}
