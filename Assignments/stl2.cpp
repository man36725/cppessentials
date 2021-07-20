/**
 * @file stl2.cpp
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
#include <bits/stdc++.h>
using namespace std;

string OddWord(list<string> words)
{
    int n = sizeof(words);
    list<string> uniqueWords = words;
    uniqueWords.sort();
    uniqueWords.unique();
    int x = count(words.begin(),words.end(),uniqueWords.front());
    int y = count(words.begin(),words.end(),uniqueWords.back());
    if(x==1)
    {
        return uniqueWords.front();
    }
    else
    {
        return uniqueWords.back();
    } 
}

int main()
{
  list<string> words{"cricket", "cricket", "cricket", "cricket", "hockey"};
  cout<<OddWord(words)<<endl;
}