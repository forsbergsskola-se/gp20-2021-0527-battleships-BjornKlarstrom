#include "Game.h"

Game::Game()
{
    playerOne.name = "Player 1";
    //playerTwo.name = "Player 2";
}
void Game::Run()
{
    playerOne.PlaceShips();
    //playerTwo.PlaceShips();
}

int main()
{
    Game game;
    game.Run();
}