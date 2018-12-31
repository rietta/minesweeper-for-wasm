#include "piece.h"
#include <vector>
using namespace std;

class Board
{
  public:
    Board(int width, int height, int mineCount);
    bool ready();
    int getWidth();
    int getHeight();
    int getMineCount();

    Piece* getPiece(int x, int y);



  private:

    int width;
    int height;
    int mineCount;
    Piece **matrix;

    void initializeBoard();
};