
/**
 * @file stl7.cpp
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
#include<cstdlib>
using namespace std;
int lesserthanmean(vector<int> &arr) // function to caluculate count less than mean
{
    int count=0;
    int total_sum = 0;
    vector<int>::iterator itr; // iterator declaration
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

int greaterthanmean(vector<int> &arr) // function to caluculate count greater than mean
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
    for(itr=arr.begin(); itr<arr.end(); itr++){ //loop to compare every element with the mean
        if (*itr>(total_sum/x)){
            count++;
        }
    }
    return count;
}
int main()
{
    std::vector<int> arr = {3,4,5,6,7,8};
    cout<<"No.of elements lesser than mean: "<<lesserthanmean(arr)<<endl;
    cout<<"No.of elements greater than mean:  "<<greaterthanmean(arr)<<endl;
    int x = abs(greaterthanmean(arr))-abs(lesserthanmean(arr));
    cout<<"difference in both :"<<x<<endl;
}