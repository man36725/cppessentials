/**
 * @file a5.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <iostream>
using namespace std;
enum AccountType{ Prepaid,Postpaid };
class Customer{
    
private:    // Access specifier //protected
    /* data member */
    string m_custId;
    string m_custName;
    string m_phone;
    double m_balance;
    AccountType m_type;
public:
    Customer();
    Customer(string ,string ,string , double );
    Customer(string ,string ,string);
    Customer(const Customer& ref);
    void credit(double);
    void makeCall(double);
    double getBalance() const;
    string getid() const;
    string getnumber() const;
    string display ()const;

    ~Customer();
};
Customer::Customer(/* args */):m_custId("?"), m_custName("?"), m_phone("?"), m_balance(0.0)
{
    
}
// Parameterized construtor
// Initializer list to initialize class data memebers
Customer::Customer(string m_custId,string m_custName,string m_phone,double m_balance):m_custId(m_custId), m_custName(m_custName), m_phone(m_phone), m_balance(m_balance)
{

}
Customer::Customer(string m_custId,string m_custName,string m_phone):m_custId(m_custId), m_custName(m_custName), m_phone(m_phone)
{

}
Customer::Customer(const Customer& ref):m_custId(ref.m_custId), m_custName(ref.m_custName), m_phone(ref.m_phone), m_balance(ref.m_balance)

{

}

Customer::~Customer()
{
    //std::cout << "in Dtor";
 }

void Customer::credit(double creditAmount)
{
    m_balance=m_balance + creditAmount;
    
}
void Customer::makeCall(double m_phone)
{
    cout<<"Calling...."<<m_phone<<endl;
}
double Customer::getBalance ()const
{
    return m_balance;
}
string Customer::getid() const
{
    return m_custId;
}
string Customer::getnumber() const
{
    return m_phone;
}
string Customer::display ()const
{
    return m_custName;
}
int main()
{
ifstream inFile;

string id;
string name;
string number;
float balance; 
inFile.open("example.csv");
if (inFile.is_open()) {
    cout << "File has been opened" << endl;
}
else {
    cout << "NO FILE HAS BEEN OPENED" << endl;
}

while (!inFile.eof()) {
    getline ( inFile, id, ',' );
    getline ( inFile, name, ',' );
    getline ( inFile, number, ',' );
    inFile >> balance;
    Customer c1(id,name,number,balance);
    cout << "ID: " << c1.getid() << endl;
    cout << "Name: " << c1.display()<< endl;
    cout << "Phone Number: " << c1.getnumber() << endl;
    cout << "Balance: " << c1.getBalance()<< endl;
}
//Customer c1(id,name,number,balance);


inFile.close();
//system("pause");
return 0;
} 