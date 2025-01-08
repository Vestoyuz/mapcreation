#ifndef MAPCREATION_H
#define MAPCREATION_H

#include <iostream>
using std::cout;
using std::endl;

class Map {
public:
   char map[25][75];
   int height = sizeof(map) / sizeof(map[0]);
   int width = sizeof(map[0]) / sizeof(map[0][0]);

   void FrameSpace(int spaces){
      for(int i = 0; i <= spaces; i++){
         cout << endl;
      }
   }

   void FillTile(char symbol){
   for(int i = 0; i < height; i++){
      for(int ii = 0; ii < width; ii++){
         map[i][ii] = symbol;
         }
      }
   }

   void PrintTile(){
      for(int i = 0; i < height; i++){
      cout << endl;
         for(int ii = 0; ii < width; ii++){
         cout << map[i][ii];
         }
      }
   }
};

#endif
