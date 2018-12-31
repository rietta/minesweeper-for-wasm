#!/usr/bin/env sh

g++ tests/board_test.cpp models/*.cpp -DBOOST_TEST_DYN_LINK -lboost_unit_test_framework -o board_test && (./board_test && rm ./board_test)