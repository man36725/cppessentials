/**
 * @file stl1.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;

pair<int,int> inpairs(vector<int> &arr,int key)
{
    sort(arr.begin(), arr.end());
    int l, r;
 
    l = 0;
    r = arr.size()-1;
    while (l < r) {
        if (arr[l] + arr[r] == key)
        {
      return make_pair(arr[l],arr[r]);
    }
            
        else if (arr[l] + arr[r] < key)
            l++;
        else 
            r--;
    }
    return make_pair(-1,-1);
}

int main()
{
    int key=12;
    cout<<"The key element is:"<<key<<endl;
    std::vector<int> arr = {7,5,16,8};
    bool status;
  pair<int,int> p=inpairs(arr,key);
  cout<<"("<<p.first<<","<<p.second<<")"<<endl;
//  cout<<status<<endl;

}