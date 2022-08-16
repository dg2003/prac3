#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{}

char Human::makeMove(){
    char c;
    cout << "Enter move: ";
    cin >> c;
    return c;
}