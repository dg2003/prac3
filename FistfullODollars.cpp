#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    x = 0;
}

char FistfullODollars::makeMove(){
if (x == 0){
    return 'R';
    x = 1;
}

else if (x == 1){
    return 'P';
    x = 2;
}

else if (x == 2){
    return 'P';
    x = 0;
}
return 'e';
}