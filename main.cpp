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
  system("cls");
  system("color 0F");

  int choice;

  cout << "1. Simple Arithmetic Calculations (+, -, *, /)" << endl;
  cout << "2. Circle Geometry" << endl;
  cout << "3. Triangle Geometry" << endl;
  cout << "4. Simple Interest Calculator" << endl;
  cout << "5. Compound Interest Calculator" << endl;
  cout << "6. Coordinate Geometry" << endl;

  cin >> choice;

  system("cls");

  switch(choice)
  {
    case 1:
      Arithmetics();
      break;
    case 2:
      Circle();
      break;
    case 3:
      Triangle();
      break;
    case 4:
      SInterest();
      break;
    case 5:
      CInterest();
      break;
    case 6:
      Coordinate();
      break;

      cin.get();

  }
}

void Arithmetics()
{
  string op;

  cout << "Enter the Arithmetic Operation you would like to use (+, -, *, /) << endl;
  cin >> op;
  
  if (op == "+")
  {
    float n1, n2, ansA
    
    cout << "Enter the first number" << endl;
    cin >> n1;
    
    cout << "Enter the Second Number" << endl;
    cin >> n2;
    
    ansA = n1 + n2;
    
    cout << n1 << " + " << n2 << " = " << ansA << endl;
    
  }
  
  if (op == "-")
  {
    float n1, n2, ansS;
    
    cout << "Enter the first number" << endl;
    cin >> n1;
    
    cout << "Enter the Second Number" << endl;
    cin >> n2;
    
    ansA = n1 - n2;
    
    cout << n1 << " - " << n2 << " = " << ansS << endl;
  }
  
  if (op == "*")
  {
    float n1, n2, ansM;
    cout << "Enter the first number" << endl;
    cin >> n1;
    
    cout << "Enter the Second Number" << endl;
    cin >> n2;
    
    ansA = n1 * n2;
    
    cout << n1 << " x " << n2 << " = " << ansM << endl;
  }
  
  if (op == "/")
  {
    float n1, n2, ansM;
    
    cout << "Enter the first number" << endl;
    cin >> n1;
    
    cout << "Enter the Second Number" << endl;
    cin >> n2;
    
    ansA = n1 / n2;
    
    cout << n1 << " divided by " << n2 << " = " << ansM << endl;
  }
  
  else
  {
    cout << "Please Enter appropiate characters" << endl;
  }

  main();
}


void Circle()
{
    int choice;

    cout << "1. Find the Circumfrence of the Circle" << endl;
    cout << "2. Find the Area of the Circle" << endl;
    cout << "3. Find the diameter of the Circle" << endl;
    cout << "4. Find the Radius of the Circle" << endl;
}



void Triangle()
{

}



void SInterest()
{

}



void CInterest()
{

}



void Coordinate()
{

}
