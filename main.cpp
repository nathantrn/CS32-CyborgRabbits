//
//  main.cpp
//  Project 1 Attempt 3
//
//  Created by Nathan Tran on 1/14/23.
//

#include "Game.h"
#include "Arena.h"
#include "History.h"
#include "Player.h"
#include "Rabbit.h"
#include "globals.h"
using namespace std;

int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 5, 2);
    Game g(10, 12, 40);

      // Play the game
    g.play();
}
