/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
  std::ostream& operator<<(std::ostream & os, const HSLAPixel & pixel) {
    os << "Pixel(hue: " << pixel.h << ", saturation: " << pixel.s << ", Brightness: " << pixel.l << ")";
    return os;
  }
}
