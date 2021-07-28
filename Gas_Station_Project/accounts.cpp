#include "accounts.h"

accounts::accounts()
{
    username = "null";
    password = "null";
    firstName = "null";
    lastName = "null";
    privilege = -1;
    sales = 0;
}

accounts::accounts(string user, string pass, string first, string last, int priv, int sale)
{
    username = user;
    password = pass;
    firstName = first;
    lastName = last;
    privilege = priv;
    sales = sale;
}

void accounts::setUsername(string user)
{
    username = user;
}

string accounts::getUsername() const
{
    return username;
}

void accounts::setPassword(string pass)
{
    password = pass;
}

string accounts::getPassword() const
{
    return password;
}

void accounts::setFirstName(string first)
{
    firstName = first;
}

string accounts::getFirstName() const
{
    return firstName;
}

void accounts::setLastname(string last)
{
    lastName = last;
}

string accounts::getLastName() const
{
    return lastName;
}

void accounts::setPrivilege(int priv)
{
    privilege = priv;
}

int accounts::getPrivilege() const
{
    return privilege;
}

void accounts::setSales(int sale)
{
    sales = sale;
}

int accounts::getSales() const
{
    return sales;
}


