/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;

// Solves the Tower of Hanoi puzzle.
// (Feel free to call "helper functions" to help you solve the puzzle.)
void Game::solve() {
  // Prints out the state of the game:
  cout << *this << endl;
  int counter = 0;

  // @TODO -- Finish solving the game!
  while(stacks_[0].size() > 0 || stacks_[1].size() > 0) {
    counter++;
    // Cube current1 = stacks_[0].peekTop();
    // Cube current2 = stacks_[1].peekTop();
    // Cube current3 = stacks_[2].peekTop();

    // cout << "current1 = " << current1 << endl;
    // cout << "current2 = " << current2 << endl;
    // cout << "current3 = " << current3 << endl;

    // if (stacks_[1].size() == 0 && stacks_[0].size() != 0) {
    //   Cube removedCube = stacks_[0].removeTop();
    //   stacks_[1].push_back(removedCube);
    // }

    // if (stacks_[2].size() == 0 && stacks_[0].size() != 0) {
    //   Cube removedCube = stacks_[0].removeTop();
    //   stacks_[2].push_back(removedCube);
    // }

    // if (stacks_[0].size() != 0 && stacks_[1].size() != 0 && stacks_[2].size() != 0) {
    //   Cube current0 = stacks_[0].peekTop();
    //   Cube current1 = stacks_[1].peekTop();
    //   Cube current2 = stacks_[2].peekTop();

    //   if (current0.getLength() < current2.getLength()) {
    //     Cube removedCube = stacks_[0].removeTop();
    //     stacks_[2].push_back(removedCube);
    //   } else {

    //   }

    //   if (current1.getLength() < current2.getLength()) {
    //     Cube removedCube = stacks_[1].removeTop();
    //     stacks_[2].push_back(removedCube);
    //   } else {

    //   }
    // }
    _legalMove(0, 1);
    cout << *this << endl;
    _legalMove(0, 2);
    cout << *this << endl;
    _legalMove(1, 2);
  }

  cout << "Round: " << counter << endl;
}

void Game::_legalMove(unsigned x, unsigned y) {
  int xSize = stacks_[x].size();
  int ySize = stacks_[y].size();

  if (xSize > 0 && ySize == 0) {
    _move(x, y);
  } else if (xSize > 0 && ySize > 0) {
    Cube xCube = stacks_[x].peekTop();
    Cube yCube = stacks_[y].peekTop();

    if (xCube.getLength() > yCube.getLength()) {
      _move(y, x);
    } else {
      _move(x, y);
    }
  } else if (xSize == 0 && ySize > 0) {
    _move(y, x);
  } else {
    cout << "Does Else really get hit ever?" << endl;
  }
}

void Game::_move(unsigned x, unsigned y) {
  Cube removedCube = stacks_[x].removeTop();
  stacks_[y].push_back(removedCube);
}

// Default constructor to create the initial state:
Game::Game() {
  // Create the three empty stacks:
  for (int i = 0; i < 3; i++) {
    Stack stackOfCubes;
    stacks_.push_back( stackOfCubes );
  }

  Cube b(7, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(b);

  Cube a(6, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(a);

  Cube red(5, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(red);

  // Create the four cubes, placing each on the [0]th stack:
  Cube blue(4, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(blue);

  Cube orange(3, uiuc::HSLAPixel::ORANGE);
  stacks_[0].push_back(orange);

  Cube purple(2, uiuc::HSLAPixel::PURPLE);
  stacks_[0].push_back(purple);

  Cube yellow(1, uiuc::HSLAPixel::YELLOW);
  stacks_[0].push_back(yellow);
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}
