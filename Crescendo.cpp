#include "Crescendo.h"

Crescendo::Crescendo(){
    x = 0;
}

char Crescendo::makeMove(){
if (x == 0){
    return 'P';
    x = 1;
}

else if (x == 1){
    return 'S';
    x = 2;
}

else if (x == 2){
    return 'R';
    x = 0;
}
return 'e';
} 