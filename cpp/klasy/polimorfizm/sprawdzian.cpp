// Zadanie 1: Zwierzęta
// Napisz program, w którym:

// Istnieje abstrakcyjna klasa Animal z czysto wirtualną metodą makeSound().
// Klasy pochodne, takie jak Dog i Cat, implementują tę metodę.

//  wywołaj metodę makeSound() dla każdego zwierzęcia.
// Przykładowy wynik:

// Skopiuj kod
// Hau!
// Meow!
// Woof!

#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
  void makeSound()
  {
    cout << "Woof!" << endl;
  }
};

class Cat : public Animal
{
public:
  void makeSound()
  {
    cout << "Meow!" << endl;
  }
};

int main()
{
  // NA STERCIE
  Animal *pointer = new Dog();
  pointer->makeSound();
  pointer = new Cat();
  pointer->makeSound();

  // NA STOSIE
  // Animal *pointer;
  // Dog dog;
  // pointer = &dog;
  // pointer->makeSound();
  // Cat cat;
  // pointer = &cat;
  // pointer->makeSound();

  return 0;
}