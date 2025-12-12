#include "queen_attack.h"
static int absolute(int number)
{
    return (number > 0 ? number : -number);
}
static int is_diagonal_attaked(position_t queen_1, position_t queen_2)
{
    return (absolute(queen_1.row - queen_2.row) == absolute(queen_1.column - queen_2.column));
}
static int is_onsame_pos(position_t queen_1, position_t queen_2)
{
    return (queen_1.row  == queen_2.row && queen_1.column == queen_2.column);
}
attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    if (is_onsame_pos(queen_1, queen_2) || queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7)
        return (INVALID_POSITION);
    if (queen_1.row == queen_2.row || queen_1.column == queen_2.column || is_diagonal_attaked(queen_1, queen_2))
        return (CAN_ATTACK);
    else 
        return (CAN_NOT_ATTACK);
}