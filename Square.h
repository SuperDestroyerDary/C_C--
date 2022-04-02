#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Square : public Shape {
  public: 
    
    void draw() {
      for(int i = 0; i < lado; i ++) {
        std::cout << " * ";
        for(int j = 0; j < lado - 2; j ++) {
          if(i == 0 || i == lado - 1) {
            std::cout << " * ";
          }
          else {
            std::cout << "   ";
          }
        }
        std::cout << " * " << endl;
      }
    }
};