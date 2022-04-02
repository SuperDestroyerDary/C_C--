#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
  public:
     
    void draw() {
      for(int i = 0; i < lado / 2; i ++) {
        for(int j = 0; j < lado; j ++) {
          std::cout << " * ";
        }
        std::cout << endl;
      }
    }
};