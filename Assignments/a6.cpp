/**
 * @file a6.cpp
 * @author Maneesh
 * @brief 
 * @version 0.1
 * @date 2021-06-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

void lcount(istream& in,
                int& chars,
                int& words,
                int& lines) {

   char s = '\0';
   char last = '\0';
   chars = words = lines = 0;

   while (in.get(s)) {
      if (s == '\n' ||
          (s == '\f' && last == '\r'))
         lines++;
      else
        chars++;
      if (!std::isalnum(s) &&   // This is the end of a
          std::isalnum(last))     // word
         words++;
      last = s;
   }
   if (chars > 0) {               // Adjust word and line
      if (std::isalnum(last))     // counts for special
         words++;                 // case
     // lines++;
   }
}

int main(int argc, char** argv) {

   if (argc < 2)
      return(EXIT_FAILURE);

   ifstream in(argv[1]);

   if (!in)
      exit(EXIT_FAILURE);

   int character, word, line;

   lcount(in, character, word, line);
   cout << "characters: " << character << '\n';
   cout << "words: " << word << '\n';
   cout << "lines: " << line << '\n';
}