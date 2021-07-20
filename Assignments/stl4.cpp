/**
 * @file stl4.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <list>
#include <string>
#include <iterator>
int main()
{
    std::string str1, str2;
    std::list< std::string> l1;
    std::list< std::string> l2;

    l1.push_back("cricket");
    l1.push_back("batmenton");
    l1.push_back("hockey");
    l1.push_back("football");
    l2.push_back("cricket");
    l2.push_back("batmenton");
    l2.push_back("hockey");
    for(std::list<std::string>::iterator itr=l1.begin();itr!=l1.end();)
    {
        bool erase_it = false;
        for(std::list<std::string>::iterator itr2 = l2.begin(); itr2!=l2.end(); )
        {
            if(*itr == *itr2)   
            {
                itr2 = l2.erase(itr2); 
                erase_it = true; 
                break;
            }
            else
            {
                ++itr2; 
            }
        }

        if(erase_it)
            itr = l1.erase(itr);
        else
            ++itr;
    }
    for(std::list<std::string>::iterator itr = l1.begin(); itr!=l1.end(); ++itr)
        std::cout<<' '<<*itr<<std::endl;

    return 0;
}

