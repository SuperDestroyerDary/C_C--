#pragma once
#include <iostream>

#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Canva.h"
#include "TrianguloEquilatero.h"
#include "TrianguloLadoDerecho.h"

using namespace std;

class Menu {
  private:
    int menuLength, option;
    string elements[10];
  public:
    Menu(int menuLength, string elements[]) {
      this->menuLength = menuLength;
      for(int i = 0; i < menuLength; i ++) {
        this->elements[i] = elements[i];
      }
    }

    void showMenu() {
      for(int i = 1; i <= menuLength; i ++) {
        cout << i << ": " << elements[i - 1] << endl;
      }
      cout << menuLength + 1 << ": Finalizar proceso" << endl;
    }

    Shape* selectedOption(int option) {
      switch(option) {
        case 1:
          return new Square();
          break;
        case 2:
          return  new Rectangle();
          break;
        case 3:
          return new TrianguloLadoDerecho();
          break;
        case 4:
          return new TrianguloEquilatero();
          break;
      }
    }
};