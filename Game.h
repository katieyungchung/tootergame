// Game.h
#ifndef _GAME_
#define _GAME_
class City;

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nTooters);
    ~Game();

        // Mutators
    void play();

  private:
    City* m_city;
};

#endif // _GAME_
