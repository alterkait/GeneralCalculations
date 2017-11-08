#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

void Arithmetics();
void Circle();
void Triangle();
void SInterest();
void CInterest();
void Coordinate();

int main()
{
  system("cls")
  system("color 0F")
  int choice;
  
  cout << "1. Simple Arithmetic Calculations (+, -, *, /)" << endl;
  cout << "2. Circle Geometry" << endl;
  cout << "3. Triangle Geometry" << endl;
  cout << "4. Simple Interest Calculator" << endl;
  cout << "5. Compound Interest Calculator" << endl;
  cout << "6. Coordinate Geometry" << endl;
  
  cin >> choice;
  
  switch(choice)
  {
    case 1:
      Arithmetics();
      break();
    case 2:
      Circle();
      break();
    case 3:
      Triangle();
      break();
    case 4:
      SInterest();
      break();
    case 5:
      CInterest();
      break();
    case 6:
      Coordinate();
      break();
      
      cin.get();
      
  }
}

void Arithmetics()
{
  float n1, n2;
  string op;
  
  cout << "Input the first Number: " << endl;
  cin >> n1;
  
  cout << "Input the arithmetic operation" << endl;
  cin >> op;
  
  cout << "Input the second number: " << endl;
  cin >> n2;
  
  if (op == "+")
  {
    float ans;
    ans = n1 + n2;
    cout << n1 << "+" << n2 << " = " << ans << endl; 
  }
  
  if (op == "-")
  {
    float ans;
  }
}

