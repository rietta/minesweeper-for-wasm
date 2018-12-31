class Piece {
  private:
  char value;
  int x;
  int y;

  public:
  const char BLANK = ' ';
  const char MINE = '*';

  Piece();
  void initialize(int x, int y, bool mine);
  char getValue();
  int getX();
  int getY();
  bool isMine();
};