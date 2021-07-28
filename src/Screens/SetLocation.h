#pragma once

#include "Screen.h"

class SetLocationScreen : public Screen {
 private:
  bool setting;

 public:
  // these should probably live somewhere else (like in Watchy)
  // but can keep them here for now
  static float lat, lon;
  static char timezone[50];
  static IPAddress ip;

 public:
  SetLocationScreen() : Screen() {}
  void show() override;
  void back() override;
};