/**
 * @file stl6.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<vector>
using namespace std;

int lesserthanmean(vector<int> &arr)
{
    int count=0;
    int total_sum = 0;
    vector<int>::iterator itr;
    int x = arr.size();
    for(itr=arr.begin();itr<arr.end();itr++)
    {
        total_sum+=*itr;
    }
   // cout<<total_sum<<endl;
    for(itr=arr.begin(); itr<arr.end(); itr++){
        if (*itr<(total_sum/x)){
            count++;
        }
    }
    return count;
}

int main()
{
    std::vector<int> arr = {3,4,5,6,7,8};
    cout<<lesserthanmean(arr)<<endl;
}