#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    x = 0;
}

char PaperDoll::makeMove(){
if (x == 0){
    return 'P';
    x = 1;
}

else if (x == 1){
    return 'S';
    x = 2;
}

else if (x == 2){
    return 'S';
    x = 0;
}
return 'e';
}