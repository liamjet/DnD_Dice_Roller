#ifndef DICE_H
#define DICE_H

#include <random>

int rollDice(int dice) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> dist(1,dice);
	int result = dist(rng);
	return result;
}

#endif