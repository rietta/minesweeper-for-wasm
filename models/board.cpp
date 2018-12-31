#include "board.h"
#include <random>
using namespace std;

Board::Board(int width, int height, int mineCount) {
  this->width = width;
  this->height = height;
  this->mineCount = mineCount;

  initializeBoard();
}

bool Board::ready() {
  return false;
}

int Board::getWidth() {
  return width;
}

int Board::getHeight() {
  return height;
}

int Board::getMineCount() {
  return mineCount;
}

Piece* Board::getPiece(int x, int y) {
  return &matrix[x][y];
}

void Board::initializeBoard() {
  // This is not secure, but just to do dice rolls
  srand(time(NULL));

  matrix = new Piece*[width];

  int mines_remaining = mineCount;
  for(int x = 0; x < width; x++) {
    matrix[x] = new Piece[height];
    for(int y = 0; y < height; y++) {
      bool place_mine = false;
      if (mines_remaining > 0 && (rand() % 2 + 1) == 1) {
        place_mine = true;
        mines_remaining--;
      }

      matrix[x][y].initialize(x, y, place_mine);
    }
  }
}
