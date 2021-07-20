/**
 * @file stl10.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <bits/stdc++.h>

//To check If the Word is present or not
bool findword(std::map<std::string, int> m, std::string key)
{
    if (m.find(key) == m.end())
        return false;
  
    return true;
}

//to Check the Word and insert into Map
void insertintomap(std::string str){
    std::map<std::string,int> m;
    std::string word= "";
    int count1=0;
    for(auto x:str)
    {
    
        if (x == ' ')
        {
            if(findword(m,word)){
                m.at(word)=count1*2;
                word="";
                count1=0;

            }else{
            m.insert(std::pair<std::string,int>(word,count1));
            word = "";
            count1=0;
            }
        }
        else {
            word = word + x;
            count1++;
        }
    }
    std::map<std::string,int>::iterator itr;
     for (itr = m.begin(); itr != m.end(); ++itr) {
        std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }   
    
}



int main()
{
    std::string s="Dhoni the Great Dhoni is a batsman";
    insertintomap(s);
    return 0;
}

