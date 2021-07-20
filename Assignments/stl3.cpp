/**
 * @file stl3.cpp
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
using namespace std;

float AverageSpeed(list<float> DistanceList, float Interval)
{
    float avg = 0;
    for(auto i:DistanceList)
    {
        avg += i/(Interval * DistanceList.size()); 
    }
    return avg;
}

int main()
{
    float Interval = 2.5;
    list<float> DistanceList{0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    cout<<AverageSpeed(DistanceList,Interval)<<endl;
}