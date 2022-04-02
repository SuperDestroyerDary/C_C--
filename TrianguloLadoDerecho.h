#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class TrianguloLadoDerecho : public Shape {
  public:
    
    void draw() {
      for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < i + 1; j ++) {
          cout << " * ";
        }
        cout << endl;
      }
    }
};