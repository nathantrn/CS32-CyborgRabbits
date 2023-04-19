//
//  Game.h
//  Project 1 Attempt 3
//
//  Created by Nathan Tran on 1/14/23.
//Game heaader

#ifndef Game_h
#define Game_h
#include <iostream>

class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nRabbits);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    std::string takePlayerTurn();
};


#endif /* Game_h */
