#define BOOST_TEST_MODULE Minesweeper Tests
#include <boost/test/unit_test.hpp>
#include "../models/board.h"

const int WIDTH=16;
const int HEIGHT=16;
const int MINES = 10;

BOOST_AUTO_TEST_CASE(dummy)
{
  BOOST_CHECK(1 + 1 == 2);
}

BOOST_AUTO_TEST_CASE(constructors_test) {
  Board* board = new Board(WIDTH, HEIGHT, MINES);
  BOOST_TEST(board->getWidth() == WIDTH);
  BOOST_TEST(board->getHeight() == HEIGHT);
  BOOST_TEST(board->getMineCount() == MINES);
}

BOOST_AUTO_TEST_CASE(game_matrix_contains_expected_number_of_mines) {
  Board *board = new Board(WIDTH, HEIGHT, MINES);
  int seen_mine_count = 0;
  for(int x = 0; x < WIDTH; x++) {
    for(int y = 0; y < HEIGHT; y++) {
      Piece* piece = board->getPiece(x, y);
      BOOST_TEST(piece->getX() == x);
      BOOST_TEST(piece->getY() == y);
      if(piece->isMine()) seen_mine_count++;
    }
  }
  BOOST_TEST(seen_mine_count == MINES);
}
