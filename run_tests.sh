#!/usr/bin/env sh

g++ tests/board_test.cpp -o board_test && (./board_test || rm ./board_test)