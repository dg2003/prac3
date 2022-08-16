#include "RandomComputer.h"
#include <stdlib.h> 
#include <iostream>
#include <time.h>
RandomComputer::RandomComputer()
{}

char RandomComputer::makeMove()
{
    srand(time(NULL));
    char a[3]={'R','P','S'};
    int n = rand() % 3;
    std::cout<<a[n];
    return 0;
}