#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class EqTriangle : public Shape {
  public:
    
    void draw() {
      for(int i = 1; i <= lado; i ++) {
        for(int j = 0; j < lado - i; j ++) {
          std::cout << " ";
        }
        for(int j = 0; j < i; j ++) {
          std::cout << " *";
        }
        std::cout << endl;
      }
    }
};