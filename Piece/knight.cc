#include "knight.h"

Knight::Knight(Colour c, Cell* ce)
: Piece(c, ce) {}

Knight::~Knight() {}

PieceName Knight::getPieceName() const
{
    return PieceName::N;
}

bool Knight::isValidMove(Coord to) const
{
    // check basics 
    if (!Piece::isValidMove(to)) return false;
    auto pos = cell->getPos();
    // 2 cases
    if ((abs(pos.r - to.r) == 2 && abs(pos.c - to.c) == 1)
        || (abs(pos.r - to.r) == 1 && abs(pos.c - to.c) == 2))
        return true;
    
    return false;
}
