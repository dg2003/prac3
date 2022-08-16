#include "Referee.h"
#include <string>
Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2){
char x;
x = player1.makeMove();
y = player2.makeMove();

    if(x=='S'){
        if(y== 'S'){
            return 'Draw';
        }

        else if(y == 'P'){
            return 'Player1';
        }

        else if(y== 'R'){
            return 'Player2';
        }
    }

    if(x=='R'){
        if(y== 'S'){
            return 'Player1';
        }

        else if(y == 'P'){
            return 'Player2';
        }

        else if(y== 'R'){
            return 'Draw';
        }
    }

    if(x=='P'){
        if(y== 'S'){
            return 'Player2';
        }

        else if(y == 'P'){
            return 'Draw';
        }

        else if(y== 'R'){
            return 'Player1';
        }
    }
    return 'e';
}