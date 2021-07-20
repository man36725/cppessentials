/**
 * @file stl9.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<list>
#include <sstream>
using namespace std;

list<int> getlist(string MACaddr)
{
    stringstream s(MACaddr);
    string a[6];
    list<int> list;
    int value;
    for(int i=0;i<6;i++)
    {
        getline(s,a[i],':');
        stringstream ss;
        ss<<a[i];
        ss >> hex >> value;
        list.push_back(value);
    }
    return list;
}

int main(){
    string MACaddr="A1:23:9B:F8:1D:5C";
    list<int> list = getlist(MACaddr);
    for(auto i:list)
    {
        cout<<i<<endl;
    }
}