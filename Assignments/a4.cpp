/**
 * @file a4.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

class Currency
{
private:
    int m_rupees;
    int m_paise;
public:
    Currency();
    Currency(int , int);
    Currency(int);
    Currency(const Currency& ref);
    int get_rupees();
    int get_paise();
    void get_input(int);
    Currency operator+(int);
    Currency operator-(int);
    bool operator==(const Currency&);  
    void display() const;
    ~Currency();
};

Currency::Currency():m_rupees(0), m_paise(0)
{
}

Currency::Currency(int m_rupees, int m_paise):m_rupees(m_rupees), m_paise(m_paise)
{
}

Currency::Currency(int m_rupees):m_rupees(m_rupees)
{
}

Currency::Currency(const Currency& ref)
{
    m_paise = ref.m_rupees *100;
    m_paise += ref.m_paise;
}

int Currency::get_rupees()
{
    return m_rupees;
} 

int Currency::get_paise()
{
    return m_paise;
}

Currency Currency::operator+(int dummy)
{
   Currency temp;
    temp.m_rupees = this->m_rupees + dummy;
    temp.m_paise = this->m_paise + dummy;
    return temp;
}

Currency Currency::operator-(int dummy)
{
    Currency temp;
    temp.m_rupees = this->m_paise - dummy;
    temp.m_paise= this->m_paise - dummy;
    return temp;
}

bool Currency::operator==(const Currency& ref)
{
    return (this->m_rupees== ref.m_rupees && this->m_paise == ref.m_paise);
}

void Currency::display() const
{
    std::cout << m_rupees << "," << m_paise << "\n";
}
void Currency::get_input(int paise)
{
    m_rupees = paise / 100;
	m_paise = paise % 100;
}

Currency::~Currency()
{
}
int main() {
    Currency t1(10, 20);
    Currency t2(t1);
    //t2.get_input(100);
    t2.display();
  /*  std::cout<<t1.get_rupees()<<std::endl;
    std::cout<<t2.get_paise()<<std::endl;
    std::cout<<t2.get_rupees()<<std::endl;*/
}