/**
 * @file stl5.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>
using namespace std;
 
map<char, int> charfreq(string str)
{
    map<char, int> M; //declaring map
    for(char i : str)
    {
        M[i]++;
    }
    return M;

}
 
int main()
{
    string str = "Maneesh";
    map<char, int> n = charfreq(str);
    map<char, int>::iterator itr;
    for(itr=n.begin();itr!=n.end();itr++)
    {
        cout<<itr->first<<"-"<<itr->second<<" "<<endl;
    }
}