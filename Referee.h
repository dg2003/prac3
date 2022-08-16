#ifndef REFEREE
#define REFEREE

#include "Human.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
class Referee{
    public:
        Referee();
        char refGame(Human player1, Computer player2);
};
#endif