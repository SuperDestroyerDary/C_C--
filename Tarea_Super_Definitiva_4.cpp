#include <iostream>

#include "Menu.h"
#include "Shape.h"
#include "Canva.h"

using namespace std;

int main() {
  bool finished = false;
  int option = 0;
  Canva canvas;
  Shape *shape = nullptr;

  cout << "MANUEL TE EXTRANO, SELECCIONA UNA OPCION: " << endl;
  string elements[4] = {"Cuadrado", "Rectangulo", "Triangulo lado derecho", "Triangulo equilatero"};
  Menu mainMenu(4, elements);

  while(true) {
    mainMenu.showMenu();
    cin >> option;

    if(option == 5) {
      break;
    }
    else if(option < 1 || option > 5) {
      cout << "Invalid option" << endl << endl;
    }
    else {
      shape = mainMenu.selectedOption(option);
      canvas.printShape(shape);
      delete shape;
    }
  }
}