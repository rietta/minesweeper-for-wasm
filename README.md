# Minesweeper to WebAssembly

This is a learning project to excercise Test Driven Development and WebAssembly. It does so by implementing a game of minesweeper.

## Installation

I'm building this project on an Ubuntu Linux 18.04 installation. I've installed the G++ build tools and the boost library.

`sudo apt-get install libboost-all-dev`

## Running the Test Suite

`./run_tests.sh`

This will build and run the test of the model layer with G++ on Linux. Later, this will be switched to the emcc compiler for WebAssembly.