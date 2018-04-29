#ifndef KNAPSACK_PROBLEM_MEET_IN_THE_MIDDLE_H
#define KNAPSACK_PROBLEM_MEET_IN_THE_MIDDLE_H

#include <vector>
#include "utilities/backpack.h"

void solvePortion(unsigned long bkpSize, vector<Item> const &items, vector<Backpack> &backpacks);
unsigned long meet_in_the_middle(unsigned long bkpSize, vector<Item> const &items);

#endif //KNAPSACK_PROBLEM_MEET_IN_THE_MIDDLE_H
