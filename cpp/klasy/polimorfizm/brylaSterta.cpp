#include <iostream>
using namespace std;

class Block
{
public:
  virtual float volume()
  {
    return 0;
  };
};

class Cuboid : public Block
{
public:
  int a, b, h;
  float volume()
  {
    return a * b * h;
  }

  Cuboid(int pA, int pB, int pH)
  {
    a = pA;
    b = pB;
    h = pH;
  }
};

class Cylinder : public Block
{
public:
  int h, r;
  float volume()
  {
    return r * r * 3.14 * h;
  };

  Cylinder(int pR, int pH)
  {
    r = pR;
    h = pH;
  };
};

class Cone : public Block
{
public:
  int h, r;
  float volume()
  {
    return r * r * 3.14 * (0.33 * h);
  };

  Cone(int pR, int pH)
  {
    r = pR;
    h = pH;
  };
};

int main()
{
  Block *block = new Cone(2, 2);
  cout << "Objetosc stozka " << block->volume() << endl;
  block =  new Cylinder(2, 2);
  cout << "Objetosc walca " << block->volume() << endl;
  block = new Cuboid(2, 2, 2);
  cout << "Objetosc prostopadloscianu " << block->volume() << endl;
  return 0;
}