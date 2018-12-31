#include "piece.h"
using namespace std;

void Piece::initialize(int x, int y, bool mine) {
  this->x = x;
  this->y = y;
  this->value = mine ? MINE : BLANK;
}

Piece::Piece() {
}

char Piece::getValue() {
  return value;
}

bool Piece::isMine() {
  return value == MINE;
}

int Piece::getX() {
  return x;
}

int Piece::getY() {
  return y;
}