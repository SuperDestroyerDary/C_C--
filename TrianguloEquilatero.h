#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class TrianguloEquilatero : public Shape {
  public:
    
    void draw() {
      for(int i = 1; i <= lado; i ++) {
        for(int j = 0; j < lado - i; j ++) {
          cout << " ";
        }
        for(int j = 0; j < i; j ++) {
          cout << " *";
        }
        cout << endl;
      }
    }
};