/**
 * @file a1.cpp
 * @author Maneesh
 * @brief Class definition for box
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string.h>
class box
{
private:    // Access specifier //protected
    /* data member */
    int m_length;
    int m_breadth;
    int m_height;
    int m_volume;
    int len;
    //const int ID;
public:
    box(/* args */);
    box(double val);
    box(int lenth, int breadth, int height);
    box(const box& ref);
    box *construct(box *barr, int index, int length, int breadth, int height);
    double volume() const;
    int get_length() const;
    int get_breadth()const;
    int get_height()const;

    ~box();
};

box::box(/* args */):m_length(0.0), m_breadth(0.0), m_height(0.0), m_volume(0.0)
{
    /*
        Same Name as class
        First function called on creation of object
        Any initialization of data members or any other initialization can be added here
        User cant call this function
    */
}
// Parameterized construtor
// Initializer list to initialize class data memebers
box::box(double val):m_length(val), m_breadth(val), m_height(val), m_volume(val * val * val)//, ID(val)
{
    //std::cout << m_length;
   // m_length = val;
   // ID = 10;
}
box::box(int length, int breadth, int height):m_length(length), m_breadth(breadth), m_height(height), m_volume(length * breadth * height)//, ID(val)
{
    //std::cout << m_length;
   // m_length = val;
   // ID = 10;
}

box::box(const box& ref):m_length(ref.m_length), m_breadth(ref.m_breadth), m_height(ref.m_height), m_volume(ref.m_length * ref.m_height * ref.m_breadth)//, ID(val)
{

}
box* box::construct(box *arr1, int index, int length, int breadth, int height)
   {
       void *addr = &arr1[index];
       box *ptr = new (addr) box(length,breadth,height);
       return ptr;
   }
box::~box()
{
    std::cout << "in Dtor";
 }
double box::volume() const
{
    return m_length * m_breadth * m_height;
}
    // Getter setter
int box::get_length() const
{
    return m_length;
}


int box::get_breadth() const
{
    return m_breadth;
}

int box::get_height() const
{
    return m_height;
}


int main() {
  //  int arr[12] = {10,20,30};
   // box *ptr = new (arr) box;
    int arr[12];
    box *ptr = new (arr) box(10,20,30);
    int x[3][3] = {{0,1,2}, {5,6,7}, {9,10,11}};
    box *ptr1 = new (x) box[5];

    box arr1[10];
    arr1->construct(arr1, 2,10,20,30);
     //box b1(10.0, 20.2, 30.3);    
     std::cout<<ptr->get_length()<<std::endl;
     std::cout<<ptr->get_breadth()<<std::endl;
     std::cout<<ptr->get_height()<<std::endl;
}
