#define BOOST_TEST_MODULE const_string test
#include <boost/test/unit_test.hpp>
#include "../models/board.h"

BOOST_AUTO_TEST_CASE(dummy)
{
  BOOST_CHECK(1 + 1 == 2);
}

BOOST_AUTO_TEST_CASE(constructors_test) {
  Board* board = new Board(16, 16, 10);
  BOOST_TEST(board->ready() == true);
}